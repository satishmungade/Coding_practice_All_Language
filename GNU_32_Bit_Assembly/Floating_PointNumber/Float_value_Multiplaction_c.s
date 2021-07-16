.section .rodata
	msg_global_value_print:
	.string " fNo1 = %f \n fNo2 = %f \n "
	
	msg_intdata:
	.int 30

	msg_ans1_print:
	.string "fAns1 = %f\t\n"
	msg_ans2_print:
	.string "fAns2 = %f\t\n"

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
		fmulp   

		movl 	$msg_ans1_print,(%esp)
		fstpl	4(%esp)
		call	printf	 

		flds	fNo1
		fimul	msg_intdata
		

		movl 	$msg_ans2_print,(%esp)
		fstpl	4(%esp)
		call	printf

		movl 	$0,(%esp)
		call	exit

