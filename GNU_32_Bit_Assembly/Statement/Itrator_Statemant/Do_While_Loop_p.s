.section .rodata
	msg_main_print:
	.string "\n Enter the Number :"

	msg_main_scan:
	.string "%d"

	msg_main_print_result:
	.string "%d\n"

.section .text
.globl main
.type main,@function
	main:

	pushl %ebp
	movl  %esp,%ebp

	subl $8,%esp
	pushl $msg_main_print
	call printf
	addl $4,%esp

	leal -4(%ebp),%ebx

	pushl %ebx
	pushl $msg_main_scan
	call scanf
	addl $8,%esp

	movl $0,-8(%ebp)


Do_Body :

	movl -8(%ebp),%eax
	pushl %eax
	pushl $msg_main_print_result
	call printf	
	addl $8,%esp

	addl $1,-8(%ebp)
	
	movl -4(%ebp),%edx
	movl -8(%ebp),%eax
	cmpl %edx,%eax
	jl Do_Body

	pushl $0
	call exit

