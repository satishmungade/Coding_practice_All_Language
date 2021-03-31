.section .rodata
	msg_fun_print1:
	.string "\n ENter a  Number :"

	msg_fun_scan:
	.string "%d"

	msg_fun_print2:
	.string "\n in Fun iNo1 is :%d\n in Fun iNo2 is :%d\n "
	
	msg_fun2_print3:
	.string "\n int static fun2 "	

.section .data				#static variable with value  int iNo1=10 Intilized 
	.type g_iNo1 ,@object	
	.size g_iNo1, 4
	.align  4
	g_iNo1 :
	.int 10

.section .bss
	.lcomm g_iNo2 ,4 		#static variable Non Intilizes  int iNo2; 


.section .text
.globl fun
.type fun ,@function
	fun:
		pushl %ebp
		movl %esp , %ebp		#bp log

		pushl $msg_fun_print1	#printf("Enter iNo value");
		call printf
		add $4,%esp

		movl $g_iNo2 ,%eax		#movl $->g_iNo2 ch address ha %eax mathe pushl kel Doller repsented the Address.
		pushl  %eax				#mg to Address ha scanf la push 
		pushl $msg_fun_scan		#scanf("%d",&g_iNo2);
		call scanf
		addl $8, %esp

		movl g_iNo1 , %edx		#je value scanf sobat g_iNo1 madhe ali ti value %edx madhe takli
		movl g_iNo2 ,%eax;		#g_iNo2 mathali bydeflaut ji hoti ti value %edx mathe takli
		
		pushl %eax				#ti printf la pathali Right ti left order ni
		pushl %edx
		pushl $msg_fun_print2
		call printf				#printf(10 ,20);
		addl $12 ,%esp

		call fun2         		#fun2 call
		
		movl %ebp ,%esp
		popl %ebp				#
		ret

.section .text
.type fun2 ,@function	#static function ahe internal scop theval ahe
	fun2:
	
		pushl %ebp
		movl %esp , %ebp

		pushl $msg_fun2_print3
		call printf
		add $4,%esp


		movl %ebp ,%esp
		popl %ebp
		ret


