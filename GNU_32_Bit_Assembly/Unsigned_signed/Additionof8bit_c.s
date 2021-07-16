
.section .rodata
	msg_main_print:
	.string "addition is :%qd"

.section .data
	.globl 	iNo1
	.type	iNo1,@object
	.size 	iNo1,8
	.align	4
	iNo1:
		.quad   2147483645123


	.globl 	iNo2
	.type	iNo2,@object
	.size 	iNo2,8
	.align	4
	iNo2:
		.quad   2147483645123		

.section .text
.globl main
.type main,@function
	main:
		pushl 	%ebp
		movl	%esp,%ebp

		andl	$-16,%esp
		subl	$16,%esp	

		movl	iNo1,%eax   #8bit value store in 4bit regiter using 2register 		
		movl	iNo1+4,%edx

		movl	iNo2,%ecx
		movl	iNo2+4,%ebx

		addl	%eax,%ecx
		adc  	%edx,%ebx		#adc addition with carry bit

		movl	$msg_main_print,(%esp)
		movl	%ecx,4(%esp)
		movl	%ebx,8(%esp)
		call	printf


		movl	$0,(%esp)
		call	exit	
