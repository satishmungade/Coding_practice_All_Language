.section .rodata
	msg_main_input_row_col_print:
	.string "\n Enter value of rows & columns(< %d):\t"
	
	msg_main_input_row_col_scan:
	.string "%d%d"

	msg_main_input_element_print:
	.string "\n Enter [%d][%d] value:\t"

	msg_main_input_element_scan:
	.string "%d"

	msg_main_your_element:
	.string "\n Entered element are :\n"

	msg_main_output_element_display:
	.string "[%d][%d] value is:\t%d\n"


.equ	MAX,50

.section .text
.globl main	
.type main,@function
	main:
		pushl	%ebp
		movl	%esp,%ebp
		subl	$10016,%esp 	#50 * 50 *4 and 4 local variable
		
		movl	$MAX,%eax

		pushl	%eax
		pushl	$msg_main_input_row_col_print
		call	printf
		addl	$8,%esp

		
		leal	-8(%ebp),%eax		#iCol
		leal	-4(%ebp),%ebx		#iRwo

		pushl	%eax
		pushl 	%ebx
		pushl	$msg_main_input_row_col_scan
		call	scanf
		addl	$12,%esp

		movl	$0,-12(%ebp)			#iCounter1
		jmp		for_codition_outer1

for_statement_outer1:
	
	movl	$0,-16(%ebp)
	jmp		for_codition_inner1

	for_statement_inner1:
		
		movl	-16(%ebp),%edx
		movl	-12(%ebp),%eax

		pushl	%edx		
		pushl 	%eax						#printf
		pushl	$msg_main_input_element_print
		call	printf
		addl	$12,%esp

		movl	-8(%ebp),%eax		#iCol * 4 =1D size
		movl	$4,%ecx
		mull	%ecx				

		movl	-12(%ebp),%ecx		#1D size * index 1D
		mull	%ecx

		leal	-10016(%ebp),%ebx    
		addl 	%ebx,%eax			#base address + 1D location
		leal	(%eax),%eax			#*(100) base address dereferd

		movl	-16(%ebp),%edx		#icounter2 
		leal 	-10016(%eax,%edx,4),%ebx	#base address + 1D ,iCounter 2 ,element size  &arr[iCnt1][iCnt2]


		pushl	%ebx
		pushl	$msg_main_input_element_scan
		call	scanf
		addl	$8,%esp

		addl	$1,-16(%ebp)			#iCounter2 ++

	for_codition_inner1:
		movl	-16(%ebp),%eax			#iCounter2
		movl	-8(%ebp),%edx			#iCol
		cmpl	%edx,%eax
		jl		for_statement_inner1

	addl	$1,-12(%ebp)				#iCounter1 ++

for_codition_outer1:	
	
	movl	-12(%ebp),%eax		#iCounter
	movl	-4(%ebp),%edx		#irow
	cmpl	%edx,%eax
	jl		for_statement_outer1		
	
	pushl	$msg_main_your_element
	call	printf
	addl	$4,%esp

	movl	$0,-12(%ebp)				#iCounter1
	jmp		for_codition_outer2

for_statement_outer2:
	movl	$0,-16(%ebp)			 	#iCounter2
	jmp		for_codition_inner2

	for_statement_inner2:
		
		movl	-8(%ebp),%eax  			#iCol * element size
		movl	$4,%ecx
		mull	%ecx

		movl	-12(%ebp),%ecx			#1D size(%eax)madhe size ali * 1D index
		mull	%ecx

		leal	-10016(%ebp),%ebx 
		addl	%ebx,%eax				#base address + 1D riched location yanchi addition %eax madhe ahe
		leal	(%eax),%eax				# ex *(100) base address dereferd

		movl	-16(%ebp),%edx			#iCounter 2
		movl	-10016(%eax,%edx,4),%ecx		#arr[iCounter1][iCounter2]

		movl	-16(%ebp),%eax
		movl	-12(%ebp),%edx
		pushl	%ecx
		pushl	%eax
		pushl 	%edx
		pushl	$msg_main_output_element_display
		call	printf
		addl	$16,%esp
			

		addl	$1,-16(%ebp)

	for_codition_inner2:
		movl	-16(%ebp),%eax		#iCounter2
		movl	-8(%ebp),%edx		#iCol
		cmpl	%edx,%eax
		jl		for_statement_inner2

	addl	$1,-12(%ebp)	

for_codition_outer2:
	movl	-12(%ebp),%eax		#iCounter 1
	movl	-4(%ebp),%edx		#irow
	cmpl	%edx,%eax
	jl		for_statement_outer2	
	
	pushl	$0
	call 	exit

