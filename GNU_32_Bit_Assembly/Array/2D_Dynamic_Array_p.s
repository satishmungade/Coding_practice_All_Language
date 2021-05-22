.section	.rodata
	msg_input_row_col_print:
	.string "Enter value of rows & columns:\t"
	msg_input_row_col_scan:
	.string "%d%d"

	msg_memory_faild:
	.string "\n Memory allocation FAILED \n"

	msg_input_element_print:
	.string "Enter [%d][%d] value:\t"

	msg_input_element_scan:
	.string "%d"

	msg_your_enterd_element:
	.string	"\n Entered Elements are :\n\n"

	msg_output_elements_display:
	.string "[%d][%d] value is:\t%d\n"

.section .text
.globl main
.type main,@function
	main:
		pushl	%ebp
		movl	%esp,%ebp

		subl 	$20,%esp

		pushl	$msg_input_row_col_print
		call	printf
		addl	$4,%esp

		leal	-8(%ebp),%eax	#iCol
		leal	-4(%ebp),%ebx	#iRow
		
		pushl	%eax
		pushl	%ebx
		pushl	$msg_input_row_col_scan
		call	scanf
		addl	$12,%esp	

		xorl 	%eax,%eax
		xorl	%ecx,%ecx
		movl	-4(%ebp),%eax  #iRow
		movl	$4,%ecx
		mul	    %ecx

		pushl	%eax
		call	malloc
		addl	$4,%esp
		cmpl	$0,%eax
		je		memory_faild

		movl	%eax,-20(%ebp)

		movl	$0,-12(%ebp)	#iCounter1
		jmp		fot_condition_scan_outer1

for_statement_scan_outer2:
	xorl 	%eax,%eax
	xorl	%ecx,%ecx
	movl	-8(%ebp),%eax	
	movl	$4,%ecx
	mul 	%ecx

	pushl	%eax
	call 	malloc	
	addl	$4,%esp
	
	cmpl	$0,%eax
	je		memory_faild
	
	movl	-12(%ebp),%edx
	movl 	-20(%ebp),%ecx
	movl 	%eax,(%ecx,%edx,4)

	movl	$0,-16(%ebp)	#iCounter2
	jmp		for_condition_scan_inner3

	for_statement_scan_inner4:
			movl	-16(%ebp),%edx
			movl	-12(%ebp),%ecx
			
			pushl	%edx
			pushl	%ecx
			pushl	$msg_input_element_print
			call	printf
			addl	$12,(%esp)

			movl	-12(%ebp),%eax
			movl	-20(%ebp),%edx
			movl    (%edx,%eax,4),%ebx
			
			movl	-16(%ebp),%eax
			leal	(%ebx,%eax,4),%edx

			pushl	%edx
			pushl 	$msg_input_element_scan
			call	scanf
			addl	$8,%esp

		addl	$1,-16(%ebp)  #iCounter 2++

	for_condition_scan_inner3:
		movl	-16(%ebp),%eax					#iCounter2
		movl	-8(%ebp),%edx					#iCol
		cmpl	%edx,%eax
		jl		for_statement_scan_inner4

		addl	$1,-12(%ebp)				#iCounter1 ++

fot_condition_scan_outer1:
	movl	-12(%ebp),%eax					#iCounter
	movl	-4(%ebp),%edx					#irow
	cmpl	%edx,%eax
	jl		for_statement_scan_outer2		

											#printing
	pushl	$msg_your_enterd_element
	call	printf
	addl	$4,%esp
	
	movl	$0,-12(%ebp)					#iCounter1
	jmp		for_condition_print_outer1

for_statement_print_outer2:
	movl	$0,-16(%ebp)					#iCounter2
	jmp		fot_condition_print_inner3

	for_statement_print_inner4:
		movl	-20(%ebp),%ebx
		movl	-12(%ebp),%edx
		movl    (%ebx,%edx,4),%eax

		movl	-16(%ebp),%edx
		movl    (%eax,%edx,4),%ecx
		movl    -12(%ebp),%eax

		pushl 	%ecx
		pushl 	%edx
		pushl  	%eax
		pushl 	$msg_output_elements_display
		call	printf
		addl   $16,%esp
		
	addl	$1,-16(%ebp)

	fot_condition_print_inner3:
		movl	-16(%ebp),%eax		#iCounter2
		movl	-8(%ebp),%edx		#iCol
		cmpl	%edx,%eax
		jl		for_statement_print_inner4

	addl	$1,-12(%ebp)		

for_condition_print_outer1:
	movl	-12(%ebp),%eax		#iCounter 1
	movl	-4(%ebp),%edx		#irow
	cmpl	%edx,%eax
	jl		for_statement_print_outer2		


	movl 	$0,-12(%ebp)		#memoey free to start
	jmp		for_condition_free

for_statement_free:
	movl	-12(%ebp),%eax
	movl	-20(%ebp),%ebx
	movl	(%ebx,%eax,4),%edx
	pushl	%edx
	call	free
	addl 	$4,%esp
	movl    $0,%edx
	
	addl 	$1,-12(%ebp)

for_condition_free:
	movl	-12(%ebp),%eax		#iCounter 1
	movl	-4(%ebp),%edx		#irow
	cmpl	%edx,%eax
	jl  	for_statement_free

	movl	-20(%ebp),%ebx
	pushl	%ebx
	call	free
	addl	$4,%esp

	pushl	$0
	call	exit	

memory_faild:
	pushl	$msg_memory_faild
	call	printf
	addl	$4,%esp

	pushl	$-1
	call	exit		
