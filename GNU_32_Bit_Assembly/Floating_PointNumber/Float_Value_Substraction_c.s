.section .rodata
	msg_global_value_print:
	.string " fNo1 = %f \n fNo2 = %f \n "
	
	msg_fno2_fno1:
	.string	"\n fAns1 = %f "
	msg_fno1_fno2:
	.string	"\n fAns2 = %f "

	msg_fno1_intervalue:
	.string "\n fAns3 = %f "

	msg_intdata:
	.int 25

	
.section .data	
	.globl  fNo1
	.type	fNo1,@object
	.size	fNo1,4
	.align	4
	fNo1:
	.float 10.22

	.globl fNo2
	.type  fNo2,@object
	.size	fNo2,4
	.align	4
	fNo2:
		.float 20.22

.section .bss
	.comm	fAns1 ,4,4

	.comm	fAns2 , 4 , 4

	.comm	fAns3 , 4 , 4




.section .text
.globl main	
.type main,@function
	main:

		pushl	%ebp
		movl 	%esp,%ebp
		andl	$-16,%esp

		subl	$16,%esp

		flds	fNo2
		flds	fNo1
		movl 	$msg_global_value_print,(%esp)
		fstpl	4(%esp)
		fstpl	12(%esp)
		call	printf

		flds	fNo2
		flds	fNo1
		fsubp   

		movl 	$msg_fno2_fno1,(%esp)
		fstpl	4(%esp)
		call	printf



		flds	fNo1
		flds	fNo2
		fsubp   

		movl 	$msg_fno1_fno2,(%esp)
		fstpl	4(%esp)
		call	printf	 

		flds	fNo1
		fisubl	msg_intdata
		

		movl 	$msg_fno1_intervalue,(%esp)
		fstpl	4(%esp)
		call	printf

		movl 	$0,(%esp)
		call	exit

