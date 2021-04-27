.section .rodata
	msg_main_print1:
	.string "\n Enter a iNo value :"

	msg_main_scanf:
	.string "%d"

	msg_main_print2:
	.string "\n Number is  :%d"

.section .bss
	.comm g_iNo ,4 ,4 #comman memory size-4 align-4  #External Linkage int iNo ; Non-Initilized 


.section .text
.globl main 
.type main , @function
	main:
		pushl %ebp
		movl %esp , %ebp

		pushl $msg_main_print1
		call printf
		add $4,%esp

		movl $g_iNo , %eax   #move hear address
		
		pushl %eax     #push hear address
		pushl $msg_main_scanf
		call scanf
		addl $8,%esp

		movl g_iNo , %eax    #move hear value
		
		pushl %eax          #push that value printf
		pushl $msg_main_print2
		call printf
		addl $8 ,%esp 
		
		pushl $0
		call exit

