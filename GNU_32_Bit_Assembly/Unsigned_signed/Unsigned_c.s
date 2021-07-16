.section .rodata
		msg_carry_bit:
		.string "\n carry Bit set :"

		msg_carry_not_set:
		.string "\n carry bit not set"

.section .text
.globl main
.type main,@function
	main:

	pushl 	%ebp	
	movl	%esp,%esp

	andl 	$-16,%esp

	subl	$16,%esp

	movb	$-2,%al
	movb	$-0,%dl
	jc      label_set
	movl	$msg_carry_not_set,(%esp)
	call 	printf
	jmp 	label_exit

	label_set :
		movl	$msg_carry_bit,(%esp)
		call	printf

	label_exit:
	movl 	$0,(%esp)
	call	exit


