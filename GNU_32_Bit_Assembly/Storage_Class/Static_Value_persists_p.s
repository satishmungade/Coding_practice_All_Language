.section .rodata
	msg_fun_print:
	.string "static variable iNo1=%d\t local variable iNo2=%d\n"

.section .data	
	.type iNo1,@object
	.size iNo1,4
	.align 4
	iNo1:
	.int 10

.section .text
.globl main
.type main,@function
	main:

	pushl %ebp
	movl %esp,%ebp

	subl $4,%esp

	movl $0,-4(%ebp)
	jmp For_Condition

for_Body:
	
	call Fun
	addl $1,-4(%ebp)

For_Condition:
	movl -4(%ebp),%eax
	cmpl $3,%eax
	jl for_Body

	pushl $0
	call exit

.globl Fun
.type Fun,@function
	Fun:
		pushl %ebp
		movl %esp,%ebp

		subl $4,%esp
		movl $10,-4(%ebp)
		addl $1,-4(%ebp)
		addl $1,iNo1

		movl -4(%ebp),%eax
		movl iNo1,%edx

		
		pushl %eax
		pushl %edx
		pushl $msg_fun_print
		call printf
		addl $12,%esp

		movl %ebp,%esp
		popl %ebp
		ret


