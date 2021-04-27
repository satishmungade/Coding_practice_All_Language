.section .rodata
	msg_main_print:
	.string "\n Enter Two Number :"
	msg_main_scan:
	.string "%d%d"
	msg_main_Ans:
	.string "Substraction is :%d\n "

.section .text
.globl main
.type main, @function
	main:

	pushl %ebp
	movl %esp,%ebp

	subl $12,%esp

	pushl $msg_main_print
	call printf
	addl $4,%esp

	leal -4(%ebp),%eax
	leal -8(%ebp),%edx
	pushl %edx
	pushl %eax
	pushl $msg_main_scan
	call scanf
	addl $12,%esp

	movl -4(%ebp),%eax
	movl -8(%ebp),%edx

	subl %edx,%eax
	movl %eax,-12(%ebp)

	pushl %eax
	pushl $msg_main_Ans
	call printf
	addl $8,%esp

	pushl $0
	call exit


