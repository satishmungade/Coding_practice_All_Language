.section .rodata
	msg_main_input_print:
	.string "\n Enter value of N:"

	msg_main_input_scan:
	.string "%d"

	msg_main_Memory_failed:
	.string "\n Memory Allocation Failed"

	msg_main_input_elements_print:
	.string "\n  Enter %d Value :"

	msg_main_input_elements_scan:
	.string "%d"

	msg_main_your_elements_in_Array:
	.string "\n Entered Elements are :\n "

	msg_main_output_elements_print:
	.string "\n index is :%d Element  is :%d \n "

.section .text
.globl main 	
.type main,@function
	main:
		pushl 	%ebp
		movl	%esp,%ebp

		subl	$12,%esp

		movl	$0,-12(%ebp)

		pushl	$msg_main_input_print
		call	printf
		addl	$4,%esp

		leal	-4(%ebp),%ebx
		pushl	%ebx
		pushl	$msg_main_input_scan
		call	scanf
		addl	$8,%esp

		movl	-4(%ebp),%eax
		movl	$4,%ecx
		mul		%ecx

		pushl	%eax
		call	malloc
		addl	$4,%esp
		cmpl	$0,%eax
		jne		Label_Not_failed

		pushl	$msg_main_Memory_failed
		call	printf
		addl	$4,%esp

		pushl	$-1
		call	exit

Label_Not_failed:
	movl	%eax,-12(%ebp)
	movl	$0,-8(%ebp)
	jmp		Label_for_condition1

Label_for_statement1:
	pushl	%eax
	pushl	$msg_main_input_elements_print
	call	printf
	addl	$8,%esp

	movl	-8(%ebp),%eax
	movl	-12(%ebp),%ebx
	leal    (%ebx,%eax,4),%ecx	#&pptr[iCnt]
	pushl	%ecx
	pushl	$msg_main_input_elements_scan
	call	scanf
	addl	$8,%esp

	addl	$1,-8(%ebp)


Label_for_condition1:
	movl	-8(%ebp),%eax
	movl	-4(%ebp),%edx
	cmpl	%edx,%eax
	jl		Label_for_statement1

	pushl	$msg_main_your_elements_in_Array
	call	printf
	addl	$4,%esp

	movl	$0,-8(%ebp)
	jmp		Label_for_condition2

Label_for_statement2:
	movl	-12(%ebp),%ebx		#address dynamic Meory ch
	movl	(%ebx,%eax,4),%ecx  #ptr[iCnt];
	
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

	movl	-12(%ebp),%ebx
	pushl	%ebx
	call	free
	addl	$4,%esp
	movl	$0,-12(%ebp)

	pushl	$0
	call	exit
