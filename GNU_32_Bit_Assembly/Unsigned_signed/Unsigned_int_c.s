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

	movl	$250,%eax
	movl	$6,%edx
	jnc      label_bitset
	movl	$msg_carry_not_set,(%esp)
	call 	printf
	jmp 	label_exit

	label_bitset :
		movl	$msg_carry_bit,(%esp)
		call	printf

	label_exit:
	movl 	$0,(%esp)
	call	exit
