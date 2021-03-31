.section .rodata
	msg_main_print1:
	.string "Enter Two Number :"
	msg_main_scan:
	.string "%d%d"
	msg_main_print2:
	.string "\n in main iNo1 is :%d\n iNo2 is:%d\n iNo3 is :%d\n"

.section .data 				#global variable with initilized int iNo =20;
	.globl g_iNo1
	.type g_iNo1 ,@object
	.size g_iNo1 , 4
	.align 4
	g_iNo1:
	.int 20

.section .bss				#global variable Non - intilized int iNo2; 
	.comm g_iNo2 ,4 ,4



.section .text
.globl main
.type main , @function
	main:
		pushl %ebp				#ep log
		movl %esp , %ebp

		subl $4,%esp      			#iNo3 jaga keli

		pushl $msg_main_print1		#Massage la push kel
		call printf					#printf ch zal
		addl $4,%esp				

		leal -4(%ebp),%eax			#iNo3 Address Store kel %eax mathe 
		movl $g_iNo2 , %edx			#g_iNo2 $haa sangto ki address ghet ahot manun Ino2 address %edx mathe takl
		
		pushl %edx					#iNo3 Right to left address scanf la push kel
		pushl %eax					#iNo2 same
		pushl $msg_main_scan
		call scanf					#scanf call
		addl $12,%esp			

		movl -4(%ebp),%eax			#atta value kadun ghetlo movl instreation ni
		movl g_iNo2 ,%edx			#same
		movl g_iNo1 ,%ebx			#same 

		pushl %eax					#iNo3 Right to left order ni printf la value pushl kel
		pushl %edx					#iNo2 same
		pushl %ebx					#g_iNo1 same
		pushl $msg_main_print2
		call printf					#printf call
		addl $16 , %esp				

		call fun

		pushl $0
		call exit					#exit(0)

