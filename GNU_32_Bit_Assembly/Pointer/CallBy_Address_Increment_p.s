.section .rodata
	msg_main_print:
	.string "Enter one Number :"
	msg_main_scan:
	.string "%d"
	msg_main_print1:
	.string "\n befor  main increment %d\n"
	msg_main_print2:
	.string " After after increment  :%d \n"

.section .text
.globl main
.type main,@function
	main:
		pushl %ebp
		movl %esp,%ebp
		addl $4,%esp

		leal -4(%ebp),%ebx
		pushl %ebx
		pushl $msg_main_scan
		call scanf
		addl $8,%esp

		movl -4(%ebp),%eax
		
		pushl %eax
		pushl $msg_main_print1
		call printf
		addl $8,%esp

		leal -4(%ebp),%ebx
		
		pushl %ebx
		call fun
		addl $4,%esp


		movl -4(%ebp),%eax
		pushl %eax
		pushl $msg_main_print2
		call printf
		addl $8,%esp

		pushl $0
		call exit

.globl fun
.type fun,@function
	fun:

		pushl %ebp
		movl %esp,%ebp

		movl 8(%ebp),%ebx
		movl (%ebx),%eax
		addl $1,(%ebx)


		movl %ebp,%esp
		popl %ebp
		ret 
