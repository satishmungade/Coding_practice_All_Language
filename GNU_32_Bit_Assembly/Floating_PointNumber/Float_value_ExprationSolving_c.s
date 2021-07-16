.section .rodata
	msg_ans_is:
	.string "\n Ans is :%lf"

	float_data_43:
	.float 43.65

	int_data_22:
	.int 22

	int_data_6:
	.int 6

	float_data_76:
	.float 76.34

	float_data_3:
	.float 3.1

	float_data_12:
	.float 12.43

	float_data_140:
	.float 140.2

	float_data_94:
	.float 94.21

.section .text
.globl main 
.type main ,@function
	main:

		pushl	%ebp
		movl 	%esp,%ebp

		andl 	$-16,%esp

		subl	$16,(%esp)



		movl	$0,(esp)
		call 	exit()
