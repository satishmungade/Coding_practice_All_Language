.section .rodata
	msg_main_input_print:
	.string "\n Enter value of N(< %d)\t:"

	msg_main_input_scan:
	.string "%d"

	msg_main_input_elements_print:
	.string "\n  Enter %d Value :"

	msg_main_input_elements_scan:
	.string "%d"

	msg_main_your_elements_in_Array:
	.string "\n Entered Elements are :\n "

	msg_main_output_elements_print:
	.string "\n index is :%d Element  is :%d \n "


.equ	MAX, 50

.section .text
.globl main 	
.type main,@function
	main:
	pushl	%ebp
	movl	%esp,%ebp

	subl	$208,%esp

	movl	$MAX,%eax	
	pushl	%eax
	pushl	$msg_main_input_print
	call 	printf
	addl	$8,%esp

	leal	-4(%ebp),%ebx
	pushl	%ebx
	pushl 	$msg_main_input_scan
	call	scanf
	addl	$8,%esp

	movl	$0,-8(%ebp)
	jmp		Label_for_condition1

Label_for_statement1:
	pushl	%eax
	pushl	$msg_main_input_elements_print
	call	printf
	addl	$8,%esp

	movl	-8(%ebp),%eax
	leal    -208(%ebp,%eax,4),%ebx
	pushl	%ebx
	pushl	$msg_main_input_elements_scan
	call	scanf

	addl	$1,-8(%ebp)
	
Label_for_condition1:
	movl	-4(%ebp),%eax
	movl	-8(%ebp),%edx
	cmpl	%eax,%edx
	jl	Label_for_statement1	

	pushl	$msg_main_your_elements_in_Array
	call	printf
	addl	$4,%esp

	movl	$0,-8(%ebp)
	jmp		Label_for_condition2

Label_for_statement2:
		
	movl	-208(%ebp,%eax,4),%ecx  #local array address index size
	
	pushl	%ecx
	pushl	%eax
	pushl	$msg_main_output_elements_print
	call	printf
	addl	$12,%esp

	addl	$1,-8(%ebp)

Label_for_condition2:
	movl	-8(%ebp),%eax
	movl	-4(%ebp),%edx
	cmpl	%edx,%eax
	jl		Label_for_statement2	


	pushl	$0
	call	exit

