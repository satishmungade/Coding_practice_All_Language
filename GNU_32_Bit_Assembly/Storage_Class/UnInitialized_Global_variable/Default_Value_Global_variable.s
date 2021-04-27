.section .rodata
	msg_main_print:
	.string "\n Number is  :%d"

.section .bss
	.comm g_iNo ,4 ,4 #comman memory size-4 align-4  #External Linkage int iNo ; Non-Initilized 


.section .text
.globl main 
.type main , @function
	main:
		pushl %ebp
		movl %esp , %ebp

		movl g_iNo,%eax
	
		pushl %eax
		pushl $msg_main_print
		call printf
		add $8,%esp

		pushl $0
		call exit

