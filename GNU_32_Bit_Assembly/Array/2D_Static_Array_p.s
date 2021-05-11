.section .rodata
	msg_main_input_row_col_print:
	.string "\n Enter value of rows & columns(< %d):\t"
	
	msg_main_input_row_col_scan:
	.string "%d%d"

	msg_main_input_element_print:
	.string "\n Enter [%d][%d] value:\t"

	msg_main_input_element_scan:
	.string "%d"

	msg_main_your_Element:
	.string "\n Entered element are :"

	msg_main_output_element_display:
	.string "[%d][%d] value is:\t%d\n"

.equ	MAX,50

.section .text
.globl main	
.type main,@function
	main:
		pushl	%ebp
		movl	%esp,%ebp
		subl	$10016,%esp
		
		pushl	$msg_main_input_row_col_print
		call	printf
		addl	$4,%esp

		leal	-4(%ebp),%ebx		#iRwo
		leal	-8(%ebp),%eax		#iCol

		pushl	%eax
		pushl 	%ebx
		pushl	$msg_main_input_row_col_scan
		call	scanf
		addl	$12,%esp

		movl	$0,-12(%ebp)	#iCounter1
		jmp		For_Codition_Outer1

For_Statement_Outer1:
	movl	$0,-16(%ebp)
	jmp		For_Codition_Inner1

		For_Statement_Inner1:
			movl	-12(%ebp),%eax
			movl	-16(%ebp),%edx

			pushl	%edx		
			pushl 	%eax		#printf
			pushl	$msg_main_input_element_print
			call	printf
			addl	$12,%esp

			movl	-12(%ebp),%eax
			movl	-16(%ebp),%edx
			leal	-10016(%ebp,%eax,4),%ebx		#scanf

			pushl	%ebx
			pushl	$msg_main_input_element_scan
			call	scanf
			addl	$8,%esp


			movl	$1,-16(%ebp)	#iCounter2 ++

		For_Codition_Inner1:
			movl	-8(%ebp),%eax
			movl	-16(%ebp),%edx
			cmpl	%edx,%eax
			jl		For_Statement_Inner1

	movl	$1,-12(%ebp)	#iCounter1 ++

For_Codition_Outer1:		
	movl	-4(%ebp),%eax		#irow
	movl	-12(%ebp),%edx		#iCounter1
	cmpl	%edx,%eax
	jl		For_Statement_Outer1

	
	pushl	$0
	call 	exit
