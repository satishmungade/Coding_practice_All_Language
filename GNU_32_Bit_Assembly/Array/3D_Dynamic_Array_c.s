.section .rodata
	msg_input_planes_row_col_print:
	.string "Enter value of planes, rows & columns:\t"
	msg_input_planes_row_col_scan:
	.string "%d%d%d"
	msg_print_memory_allocation_faild:
	.string "\n Memory Allocation faild"
	msg_input_element_print:
	.string "Enter [%d][%d][%d] value:\t"
	msg_input_element_scan:
	.string "%d"
	msg_entered_element:
	.string "\n Enter Element Are :\n"	
	msg_out_display_element:
	.string "[%d][%d][%d] value is:\t%d\n"

.section .text
.globl main
.type main,@function
	main:
		pushl	%ebp
		movl 	%esp,%ebp

		andl	$-16,%esp
		subl	$48,%esp

		movl	$msg_input_planes_row_col_print,(%esp)
		call	printf

		leal	-4(%ebp),%eax		#iplan
		leal	-8(%ebp),%edx		#iRow
		leal	-12(%ebp),%ecx		#iCol
		movl	$msg_input_planes_row_col_scan,(%esp)
		movl	%eax,4(%esp)
		movl	%edx,8(%esp)
		movl	%ecx,12(%esp)
		call	scanf

		movl	-4(%ebp),%eax 	#iplan * 4 =ans malloc(ans)
		movl	$4,%ecx
		mull	%ecx

		movl	%eax,(%esp)
		call	malloc 
		movl	%eax,-28(%ebp)			#memory allocate kel ani pppPtr madhe takli

		cmpl	$0,%eax
		je		memory_allocation_faild
		

		movl	$0,-16(%ebp)			#iCounter1
		jmp		for_codition_outer1

for_statement_outer1:
	movl	-8(%ebp),%eax    #iRow * 4 =ans   malloc(ans)
	movl	$4,%ecx
	mull	%ecx
	
	movl	%eax,(%esp)
	call 	malloc
	

	movl	-16(%ebp),%edx
	movl	-28(%ebp),%ecx
	movl	%eax,(%ecx,%edx,4)		#ptr[iCounter1] madhe malloc address takal

	cmpl	$0,%eax
	je 		memory_allocation_faild
	
	
	movl	$0,-20(%ebp)
	jmp		for_codition_inner1

	for_statement_inner1:
		
		movl	-12(%ebp),%eax 			#iCol * 4 = ans malloc(ans)
		movl	$4,%ecx
		mull	%ecx

		movl	%eax,(%esp)
		call 	malloc

		movl	-16(%ebp),%edx 					#iCounter1
		movl	-28(%ebp),%ebx					#pppPtr madhel address kadal
 		movl	(%ebx,%edx,4),%ebx  			#pppPtr[iCounter]  madhel address kadal
		movl	-20(%ebp),%edx 					#iCounter2
		movl	%eax,(%ebx,%edx,4)				#pppPtr[iCounter][iCounter2] madhel address takal
		
		cmpl	$0,%eax
		je 		memory_allocation_faild
	

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

				movl	-16(%ebp),%eax 				
				movl	-28(%ebp),%edx 				
				movl	(%edx,%eax,4),%ebx 			#pppPtr[iCounter1]
				

				movl	-20(%ebp),%eax
				movl	(%ebx,%eax,4),%ebx 			#pppPtr[iCounter1][iCounter2]	

				movl	-24(%ebp),%eax
				leal	(%ebx,%eax,4),%ebx         #&pppPtr[iCounter1][iCounter2][iCounter3]

				movl	$msg_input_element_scan,(%esp)
				movl	%ebx,4(%esp) 					# scanf("%d",&pppPtr[iCounter1][iCounter2][iCounter3])
				call 	scanf


			addl	$1,-24(%ebp)				#iCounter3 ++

			for_codition_small:
				movl	-24(%ebp),%eax 			#iCol
				movl	-12(%ebp),%edx 			#iCounter3
				cmpl	%edx,%eax
				jl 		for_statement_small

			addl	$1,-20(%ebp)				#iCounter2 ++

	for_codition_inner1:
		movl	-20(%ebp),%eax					#iCounter2
		movl	-8(%ebp),%edx					#irwo
		cmpl	%edx,%eax
		jl		for_statement_inner1

		addl	$1,-16(%ebp)					#iCounter1 ++

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


				movl	-16(%ebp),%eax				#iCounter1
				movl	-28(%ebp),%edx 				#pppPtr
				movl	(%edx,%eax,4),%ebx			#pppPtr[icounter1]
				

				movl	-20(%ebp),%eax				#iCounter2
				movl	(%ebx,%eax,4),%ebx			#pppPtr[iCounter1][iCounter2]

				movl	-24(%ebp),%eax 				#iCounter3	
				movl	(%ebx,%eax,4),%ebx			#pppPtr[iCounter1][iCounter2][iCounter3]
				
				movl	-16(%ebp),%eax
				movl	-20(%ebp),%edx
				movl	-24(%ebp),%ecx
				movl	$msg_out_display_element,(%esp)
				movl	%eax,4(%esp)
				movl	%edx,8(%esp)
				movl	%ecx,12(%esp)
				movl	%ebx,16(%esp) 				#pppPtr[iCounter1][iCounter2][iCounter3]	
				call 	printf


				addl $1,-24(%ebp)	
				
			for_codition_small_printing:
				movl	-24(%ebp),%eax 		#iCounter3
				movl	-12(%ebp),%edx		#iCol
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

	
	movl	$0,-16(%ebp)							#iCounter1
	jmp		for_codition_outer_memory_free

for_statement_outer_memory_free:
	movl	$0,-20(%ebp)			 				#iCounter2
	jmp		for_codition_inner_memory_free

	for_statement_inner_memory_free:
		
		movl	-28(%ebp),%eax 		
		movl	-16(%ebp),%edx		
		movl	(%eax,%edx,4),%ebx				#pppPtr[iCounter1]
		
		movl	-20(%ebp),%eax					#iCounter2
		movl	(%ebx,%eax,4),%ebx  			#pppPtr[iCounter1][iCounter2]
		
		movl	%ebx,(%esp)
		call 	free	 						#free(pppPtr[iCounter1][iCounter2])	
		movl	$0,%ebx

		addl	$1,-20(%ebp)

	for_codition_inner_memory_free:
		movl	-20(%ebp),%eax					#iCounter2
		movl	-8(%ebp),%edx					#irow
		cmpl	%edx,%eax
		jl		for_statement_inner_memory_free

		movl	-28(%ebp),%edx					#pppPtr
		movl	-16(%ebp),%eax					#iCounter1
		movl	(%edx,%eax,4),%edx				#pppPtr[iCounter1]
		movl	%edx,(%esp)
		call 	free  							#free(pppPtr[iCounter1])	
		movl	$0,%edx

	addl	$1,-16(%ebp)	

for_codition_outer_memory_free:
	movl	-16(%ebp),%eax		#iCounter 1
	movl	-4(%ebp),%edx		#iplan
	cmpl	%edx,%eax
	jl		for_statement_outer_memory_free	


	movl	-28(%ebp),%eax
	movl	%eax,(%esp)
	call 	free 				#free(pppPtr)
	movl	$0,-28(%ebp)

	movl	$0,(%esp)
	call	exit

memory_allocation_faild:
	movl	$msg_print_memory_allocation_faild,(%esp)
	call	printf
	movl	$-1,(%esp)
	ret	



