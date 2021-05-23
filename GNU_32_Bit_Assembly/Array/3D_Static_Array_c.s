.section .rodata
	msg_input_planes_row_col_print:
	.string "Enter value of planes, rows & columns(< %d, %d, %d)\t :"
	msg_input_planes_row_col_scan:
	.string "%d%d%d"
	msg_input_element_print:
	.string "\n Enter [%d][%d][%d] value:\t"	
	msg_input_element_scan:
	.string "%d"
	msg_entered_element:
	.string "\n Entered elements are:\n"
	msg_output_display_element:
	.string "[%d][%d][%d] value is:\t%d\n"

.equ	MAX1, 5
.equ	MAX2, 50
.section .text
.globl main
.type main,@function
	main:
		pushl	%ebp
		movl	%esp,%ebp
		
		andl	$-16,%esp

		subl	$50048,%esp

		movl	$MAX1,%eax
		movl	$MAX2,%edx
		movl	$MAX2,%ecx
		movl	$msg_input_planes_row_col_print,(%esp)
		movl	%eax,4(%esp)
		movl	%edx,8(%esp)
		movl	%ecx,12(%esp)
		call	printf

		leal	-4(%ebp),%eax
		leal	-8(%ebp),%ebx
		leal	-12(%ebp),%edx
		movl	$msg_input_planes_row_col_scan,(%esp)
		movl	%eax,4(%esp)
		movl	%ebx,8(%esp)
		movl	%edx,12(%esp)
		call	scanf
		
		movl	$0,-16(%ebp)			#iCounter1
		jmp		for_codition_outer1

for_statement_outer1:
	
	movl	$0,-20(%ebp)
	jmp		for_codition_inner1

	for_statement_inner1:
		movl	$0,-24(%ebp)
		jmp for_codition_small


			for_statement_small:
				movl	-16(%ebp),%eax
				movl	-20(%ebp),%edx
				movl	-24(%ebp),%ecx
				movl	$msg_input_element_print,(%esp)
				movl	%eax,4(%esp)
				movl	%edx,8(%esp)
				movl	%ecx,12(%esp)
				call 	printf

				movl	-12(%ebp),%eax
				movl	$4,%ecx
				mul		%ecx			#iCol * 4 =1D size


				movl	-8(%ebp),%ecx
				mul		%ecx			#1D * IRow =2D size
					
				movl	-16(%ebp),%ecx		#2D * Index1
				mul		%ecx

				leal	-50048(%ebp),%ebx
				addl	%ebx,%eax		#2D + index1

				movl	%eax,-28(%ebp)		#jugad kel

				movl	-12(%ebp),%eax		
				movl	$4,%ecx
				mul		%ecx			#1Dsize

				movl	-20(%ebp),%ecx	#1D * index2
				mul		%ecx

				movl	-28(%ebp),%edx		#jugad
				addl	%edx,%eax
				movl	-24(%ebp),%ecx		
				leal	(%eax,%ecx,4),%ebx

				movl	$msg_input_element_scan,(%esp)
				movl	%ebx,4(%esp)
				call 	scanf	


			addl	$1,-24(%ebp)

			for_codition_small:
				movl	-24(%ebp),%eax
				movl	-12(%ebp),%edx
				cmpl	%edx,%eax
				jl 		for_statement_small

			addl	$1,-20(%ebp)			#iCounter2 ++

	for_codition_inner1:
		movl	-20(%ebp),%eax			#iCounter2
		movl	-8(%ebp),%edx			#irwo
		cmpl	%edx,%eax
		jl		for_statement_inner1

		addl	$1,-16(%ebp)				#iCounter1 ++

for_codition_outer1:	
	
	movl	-16(%ebp),%eax		#iCounter
	movl	-4(%ebp),%edx		#iplan
	cmpl	%edx,%eax
	jl		for_statement_outer1		
	 
	movl	$msg_entered_element,(%esp)   #printing
	call 	printf		

	movl	$0,-16(%ebp)
	jmp 	for_codition_outer_printing

for_statement_outer_printing:
	movl	$0,-20(%ebp)
	jmp		for_codition_inner_printing

	for_statement_inner_printing:
		movl	$0,-24(%ebp)
		jmp		for_codition_small_printing

			for_statement_small_print:

				movl	-12(%ebp),%eax
				movl	$4,%ecx
				mul		%ecx			#iCol * 4 =1D size

				movl	-8(%ebp),%ecx
				mul		%ecx			#1D * IRow =2D size
				
				
				movl	-16(%ebp),%ecx		#2D SIZE  * Index1
				mul		%ecx

				leal	-50048(%ebp),%ebx
				addl	%ebx,%eax			#base address + 2D size Riching element

				movl	%eax,-28(%ebp)		#jugad kel

				movl	-12(%ebp),%eax		
				movl	$4,%ecx
				mul		%ecx			#1Dsize

		
				movl	-20(%ebp),%ecx	#1D * index2
				mul		%ecx

				movl	-28(%ebp),%edx		#jugad		#old base address
				addl	%edx,%eax			#old base address + 1Dsize
				movl	-24(%ebp),%ecx		
				movl	(%eax,%ecx,4),%ebx 	#arr[1][2][3]
				
				movl	-16(%ebp),%eax
				movl	-20(%ebp),%edx
				movl	$msg_output_display_element,(%esp)
				movl	%eax,4(%esp)
				movl	%edx,8(%esp)
				movl	%ecx,12(%esp)
				movl	%ebx,16(%esp)
				call 	printf	


				addl $1,-24(%ebp)	
				
			for_codition_small_printing:
				movl	-24(%ebp),%eax
				movl	-12(%ebp),%edx
				cmpl	%edx,%eax
				jl 		for_statement_small_print

			addl	$1,-20(%ebp)			


	for_codition_inner_printing:
		movl	-20(%ebp),%eax			#iCounter2
		movl	-8(%ebp),%edx			#irwo
		cmpl	%edx,%eax
		jl		for_statement_inner_printing

	addl	$1,-16(%ebp)

for_codition_outer_printing:
	movl	-16(%ebp),%eax		#iCounter
	movl	-4(%ebp),%edx		#iplan
	cmpl	%edx,%eax
	jl		for_statement_outer_printing		


	movl	$0,(%esp)
	call 	exit




		
