.section .rodata
	msg_main_allmenu_printf:
	.string "\n 1.Insert :\n 2.Delete :\n 3.Search :\n 4.Count :\n 5.Reverse Display :\n 6.Exit :\n"
	
	msg_main_all_menu_your_choice_printf:
	.string "\n\n Enter Your Choice :"
	
	msg_main_all_menu_your_choice_scanf:
	.string "%d"

	#generic Rodata
	
	msg_your_choice_printf:
	.string "\n\t Enter Your Choice Again:"
	
	msg_your_choice_scanf:
	.string "%d"

	msg_enter_pos_printf:
	.string "\n\t Enter a Position :"
	
	msg_enter_pos_scanf:
	.string "%d"

	msg_valid_choice:
	.string "\n\t\t Enter Valid Choice :\n "

	msg_memory_allocation_faild:
	.string "Memory Allocation failed"
	

	#insert Rodata

	msg_insert_menu_printf:
	.string "\n\n\t 1.InsertFirst :\n\t 2.InsertLast :\n\t 3.InsertAtPosition :\n\t 4.Back :\n "
	
	msg_insert_element_printf:
	.string "\n\t Enter data to be insert :"
	
	msg_insert_element_scanf:
	.string "%d"

	msg_position_invalid:
	.string "\n\n postion is invalid "


	
	#delete Rodata

	msg_delete_menu_printf:
	.string "\n\t1.DeleteFirst : \n\t2.DeleteLast :\n\t3.DeleteAtPosition :\n\t4.Back :\n"
	
	msg_delete_empty:
	.string "\n\t Linked List is Empty Deletion Impossiabl\n"

	msg_delete_data:
	.string "\n\t Deleted Data is %d : \n"
	
	msg_all_node_delete:
	.string "\n\n\t Deleted  Alls Nodes successfully Thank-You \n"

	#search rodata
	
	msg_search_empty:
	.string "\n\t Linked List is Empty Searching Impossiabl\n"

	msg_search_menu_printf:
	.string "\n\n\t1.SearchFirstOccurance : \n\t2.SearchLastOccurance :\n\t3.SearchAllOccurance :\n\t4.back :\n"
	
	msg_enter_data_search_printf:
	.string "\n\n\t Enter Data To be Search :"
	
	msg_enter_data_search_scanf:
	.string "%d"
	
	msg_data_not_found:
	.string "\n\n\t Data Not Found :"
	
	msg_list_empty:
	.string "\n\t Linked List is Empty :\n"
	
	msg_data_found_at_position:
	.string "\n\n\t Data Found At %d Position :"
	
	msg_found_time:
	.string "\n\n\t Data Found %d Times :"


	#display 
	msg_linked_list:
	.string "\n\n  Linked List is :\t"

	msg_print_list:
	.string "<-|%d|->"


	msg_total_count:
	.string "\n\t Total Node is Present :%d"

	msg_reverse_display:
	.string "\n\n\t Reverse Linked is :"

	msg_end_bye:
	.string	"\n\t bye see u soon ... :)\n"


.section .bss
	.comm List ,12,4
	

.section .text
.globl main 	
.type main,@function
	main:
		pushl	%ebp
		movl	%esp,%ebp
		
		andl	$-16,%esp
		subl	$48,%esp     #-4 ino,-8ipos,-12choice,-16 pfist,-20plast,next 16 call parameter

		movl	$0,-12(%ebp)
		movl	$0,-16(%ebp)
		movl	$0,-20(%ebp)

while_body:
		
		movl	$msg_main_allmenu_printf,(%esp)
		call 	printf
		
		movl	$msg_main_all_menu_your_choice_printf,(%esp)
		call	printf
		
		leal	-12(%ebp),%eax
		movl	$msg_main_all_menu_your_choice_scanf,(%esp)
		movl 	%eax,4(%esp)
		call 	scanf 

		movl	-12(%ebp),%eax
	label_switch:
		cmpl	$1,%eax
		je 		label_switch_insert1
		cmpl	$2,%eax
		je 	    label_switch_Delete2
		cmpl	$3,%eax
		je 		label_switch_search3
		cmpl	$4,%eax
		je 		label_switch_count4
		cmpl	$5,%eax
		je 		label_switch_reverse_display5
		cmpl	$6,%eax
		je		label_switch_exit6
		jmp		label_default

	
	label_switch_insert1:
		
		while_body_insert:

			movl	$msg_insert_menu_printf,(%esp)
			call	printf
			
			movl	$msg_your_choice_printf,(%esp)
			call	printf
			
			leal	-12(%ebp),%eax
			movl	$msg_your_choice_scanf,(%esp)
			movl	%eax,4(%esp)
			call	scanf

			movl	-12(%ebp),%eax
			cmpl	$4,%eax
			je 		while_body
			

			cmpl	$0,%eax
			jle		label_valid_choice
			cmpl	$3,%eax
			jg	 	label_valid_choice

			movl	$msg_insert_element_printf,(%esp)
			call	printf
			
			leal 	-4(%ebp),%ebx
			movl	$msg_insert_element_scanf,(%esp)
			movl	%ebx,4(%esp)
			call 	scanf

			movl	-12(%ebp),%eax
			cmpl	$1,%eax
			je 		lebel_insert_first
			cmpl 	$2,%eax
			je 		label_insert_last
			cmpl	$3,%eax
			je 		label_insert_at_pos


			label_valid_choice:
				movl	$msg_valid_choice,(%esp)
				call	printf
				jmp     while_body_insert

			


		lebel_insert_first:

			leal 	-16(%ebp),%eax
			leal 	-20(%ebp),%edx
			movl	-4(%ebp),%ecx
			movl	%eax,(%esp)
			movl	%edx,4(%esp)
			movl	%ecx,8(%esp)
			call	InsertFirst
			jmp     label_Display

		label_insert_last:
			leal 	-16(%ebp),%eax
			leal 	-20(%ebp),%edx
			movl	-4(%ebp),%ecx
			movl	%eax,(%esp)
			movl	%edx,4(%esp)
			movl	%ecx,8(%esp)
			call	Insertlast
			jmp 	label_Display	

		label_insert_at_pos:
			movl	$msg_enter_pos_printf,(%esp)
			call	printf

			leal 	-8(%ebp),%ebx
			movl	$msg_enter_pos_scanf,(%esp)
			movl	%ebx,4(%esp)
			call	scanf

			leal 	-16(%ebp),%eax 
			leal 	-20(%ebp),%edx
			movl	-4(%ebp),%ecx
			movl	-8(%ebp),%ebx
			movl	%eax,(%esp)
			movl	%edx,4(%esp)
			movl	%ecx,8(%esp)
			movl	%ebx,12(%esp)
			call	InsertAtPos
			

	label_Display:
	
	movl 	-16(%ebp),%eax
	movl 	-20(%ebp),%edx
	movl	%eax,(%esp)
	movl	%edx,4(%esp)
	call	Display

	jmp 	while_body_insert
	
	label_switch_Delete2:

		movl	-16(%ebp),%eax
		cmpl	$0,%eax
		jne 	while_body_delete

		movl	$msg_delete_empty,(%esp)
		call	printf
		jmp		while_body
		
		while_body_delete:	
			movl	$msg_delete_menu_printf,(%esp)
			call	printf
			
			movl	$msg_your_choice_printf,(%esp)
			call	printf
			
			leal 	-12(%ebp),%ebx
			movl	$msg_your_choice_scanf,(%esp)
			movl	%ebx,4(%esp)
			call	scanf

			movl	-12(%ebp),%eax
			cmpl	$4,%eax
			je 		while_body

			cmpl	$1,%eax
			je 		label_switch_deletefirst
			cmpl	$2,%eax
			je 		label_switch_deletelast
			cmpl 	$3,%eax
			je 		label_switch_deleteatpos
			
			movl	$msg_valid_choice,(%esp)
			call	printf
			movl	$4,-12(%ebp)
			jmp 	label_Display1



				label_switch_deletefirst:
					leal 	-16(%ebp),%eax
					leal    -20(%ebp),%edx
					movl	%eax,(%esp)
					movl	%edx,4(%esp)
					call 	DeleteFirst
					movl	%eax,-4(%ebp)
					jmp 	label_Display1
					

				label_switch_deletelast:
					leal 	-16(%ebp),%eax
					leal    -20(%ebp),%edx
					movl	%eax,(%esp)
					movl	%edx,4(%esp)
					call    DeleteLast
					movl	%eax,-4(%ebp)
					jmp     label_Display1

				label_switch_deleteatpos:
					
					movl	$msg_enter_pos_printf,(%esp)
					call	printf
					
					leal 	-8(%ebp),%ebx
					movl	$msg_enter_pos_scanf,(%esp)
					movl	%ebx,4(%esp)
					call	scanf
					
					leal 	-16(%ebp),%eax
					leal    -20(%ebp),%edx
					movl	-8(%ebp),%ecx

					movl	%eax,(%esp)
					movl	%edx,4(%esp)
					movl	%ecx,8(%esp)
					call	DeleteAtPosition
					
					movl	%eax,-4(%ebp)
					


		label_Display1:
			
			cmpl	$-1,%eax
			jne     deleted_element

			movl 	$msg_list_empty,(%esp)
			call    printf
			jmp 	while_body_delete
		
		deleted_element:
			movl	-12(%ebp),%edx
			cmpl	$4,%edx
			je  	while_body_delete
			movl	-4(%ebp),%eax
			cmpl	$-2,%eax
			je 		while_body_delete

			movl	$msg_delete_data,(%esp)
			movl	%eax,4(%esp)
			call	printf

			movl 	-16(%ebp),%eax
			movl 	-20(%ebp),%edx
			movl	%eax,(%esp)
			movl	%edx,4(%esp)
			call	Display
			jmp 	while_body_delete


	
	label_switch_search3:
		movl	-16(%ebp),%eax
		cmpl	$0,%eax
		jne 	while_body_search

		movl	$msg_search_empty,(%esp)
		call	printf
		jmp		while_body

		while_body_search:
			movl	$msg_search_menu_printf,(%esp)
			call	printf
			
			movl	$msg_your_choice_printf,(%esp)
			call	printf
			
			leal    -12(%ebp),%ebx
			movl	$msg_your_choice_scanf,(%esp)
			movl	%ebx,4(%esp)
			call	scanf

			movl	-12(%ebp),%eax
			cmpl	$4,%eax
			je 		while_body

			
			movl	-12(%ebp),%eax
			cmpl	$0,%eax
			jle		label_valid_choice1
			cmpl	$3,%eax
			jg	 	label_valid_choice1

			movl	-16(%ebp),%eax
			movl	-20(%ebp),%edx
			movl	%eax,(%esp)
			movl	%edx,4(%esp)
			call	Display

			movl	$msg_enter_data_search_printf,(%esp)
			call	printf
			
			leal	-4(%ebp),%ebx
			movl	$msg_enter_data_search_scanf,(%esp)
			movl	%ebx,4(%esp)
			call	scanf


			movl	-12(%ebp),%eax
			cmpl	$1,%eax
			je 		label_first_occurance1
			cmpl	$2,%eax
			je 		label_last_occurance2
			cmpl	$3,%eax
			je 		label_all_occurance3


				label_first_occurance1:
					movl	-16(%ebp),%eax
					movl	-20(%ebp),%edx
					movl	-4(%ebp),%ecx
					movl	%eax,(%esp)
					movl	%edx,4(%esp)
					movl	%ecx,8(%esp)
					call    SearchFirstOccurance
					
					cmpl 	$-1,%eax
					je 		list_empty
					cmpl	$-2,%eax
					je 		data_not_found
					
					movl	$msg_data_found_at_position,(%esp)
					movl	%eax,4(%esp)
					call	printf
					
					jmp while_body_search

				label_last_occurance2:
					movl	-16(%ebp),%eax
					movl	-20(%ebp),%edx
					movl	-4(%ebp),%ecx
					movl	%eax,(%esp)
					movl	%edx,4(%esp)
					movl	%ecx,8(%esp)
					call    SearchLastOccurance
					
					cmpl 	$-1,%eax
					je 		list_empty
					cmpl	$-2,%eax
					je 		data_not_found
					
					movl	$msg_data_found_at_position,(%esp)
					movl	%eax,4(%esp)
					call 	printf
					jmp 	while_body_search

				label_all_occurance3:
					movl	-16(%ebp),%eax
					movl	-20(%ebp),%edx
					movl	-4(%ebp),%ecx
					movl	%eax,(%esp)
					movl	%edx,4(%esp)
					movl	%ecx,8(%esp)
					call	SearchAllOccurance
					
					movl	$msg_found_time,(%esp)
					movl	%eax,4(%esp)
					call	printf
					jmp 	while_body_search



					list_empty:
						movl	$msg_list_empty,(%esp)
						call	printf
						jmp 	while_body_search

					data_not_found:	
						movl	$msg_data_not_found,(%esp)
						call	printf
						jmp 	while_body_search

				label_valid_choice1:
					movl	$msg_valid_choice,(%esp)
					call	printf	
					jmp 	while_body_search	



		jmp	while_body

	label_switch_count4:
		
		movl 	-16(%ebp),%eax
		movl 	-20(%ebp),%edx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call	Display

		movl	-16(%ebp),%eax
		movl	-20(%ebp),%edx
		movl	 %eax,(%esp)
		movl	%edx,4(%esp)
		call	CountNode

		movl	$msg_total_count,(%esp)
		movl	%eax,4(%esp)
		call 	printf
		
		jmp	while_body
	
	label_switch_reverse_display5:
		
		movl 	-16(%ebp),%eax
		movl 	-20(%ebp),%edx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call	Display

		movl 	-16(%ebp),%eax
		movl 	-20(%ebp),%edx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call	ReverseDisplay
		
		jmp		while_body

	label_switch_exit6:	

		movl	-16(%ebp),%eax
		cmpl	$0,%eax
		je 	    label_print_bye

		leal 	-16(%ebp),%eax
		leal    -20(%ebp),%edx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call	DeleteAllNode	

	label_print_bye:

		movl	$msg_end_bye,(%esp)
		call	printf

		movl 	$0,(%esp)
		call	exit

	label_default:
		movl	$msg_valid_choice,(%esp)
		call	printf
		jmp 	while_body	




.globl InsertFirst
.type	InsertFirst,@function
	InsertFirst:

		pushl	%ebp
		movl	%esp,%ebp
		subl 	$16,%esp

		movl	$0,-4(%ebp)		#newNode NULL

		movl	$12,(%esp)		#malloc(12)
		call	malloc

		movl	%eax,-4(%ebp)	
		cmpl	$0,%eax
		je 		label_malloc_faild

		movl	16(%ebp),%eax		#iNo
		movl	-4(%ebp),%ebx		#newNode
		movl	%eax,4(%ebx)		#->iData=iN0  
		movl	8(%ebp),%eax		#phead check NULL
		cmpl	$0,(%eax)					
		jne 	label_first_node

		movl	-4(%ebp),%eax
		movl	8(%ebp),%edx
		movl	%eax,(%edx)
		movl	12(%ebp),%ecx
		movl	%eax,(%ecx)

		movl	(%edx),%edx
		movl	(%ecx),%ecx

		movl	%ecx,8(%edx)
		movl	%edx,(%ecx)

		jmp		label_eplog1


	label_first_node:

		movl	-4(%ebp),%eax
		movl	8(%ebp),%edx
		movl	(%edx),%edx
		movl	%edx,8(%eax)

		movl	%eax,(%edx)

		movl	8(%ebp),%edx
		movl	%eax,(%edx)

		movl	12(%ebp),%ebx
		movl	(%ebx),%ebx
		movl	(%edx),%edx
		movl	%edx,8(%ebx)

		movl	8(%ebp),%edx
		movl	(%edx),%edx
		movl	12(%ebp),%ebx
		movl	(%ebx),%ebx
		movl	%ebx,(%edx)

		jmp		label_eplog1


	label_malloc_faild:	
		movl	$msg_memory_allocation_faild,(%esp)
		call	printf

	label_eplog1:
		movl	%ebp,%esp
		popl	%ebp
		ret


.globl Insertlast
.type	Insertlast,@function
	Insertlast:

		pushl	%ebp
		movl	%esp,%ebp
		
		subl 	$16,%esp

		movl	$0,-4(%ebp)		#newNode NULL

		movl	$12,(%esp)		#malloc(12)
		call	malloc

		movl	%eax,-4(%ebp)	
		cmpl	$0,%eax
		je 		label_malloc_faild1


		movl	16(%ebp),%eax		
		movl	-4(%ebp),%ebx		
		movl	%eax,4(%ebx)

		movl	8(%ebp),%eax	# ppHead		
		cmpl	$0,(%eax)					
		jne	 	label_last_node
   		

		movl	-4(%ebp),%eax      #newNodew
		movl	8(%ebp),%edx       #phead
		movl	%eax,(%edx)			#*phead=newnode
		movl	12(%ebp),%ecx       #ptail
		movl	%eax,(%ecx)        #*ptail=newnode

		movl	(%edx),%edx      #*phead address kadal
		movl	(%ecx),%ecx      #*tail 

		movl	%ecx,8(%edx)     #tail->next=*phead
		movl	%edx,(%ecx)      #head->prve=*tail

		jmp		label_eplog1


	label_last_node:
		movl	12(%ebp),%eax    #ptail->next=NewNode
		movl	(%eax),%eax	
		movl	-4(%ebp),%edx
		movl	%edx,8(%eax)

		movl	%eax,(%edx)		#newnode->prve=ptail
		
		movl	12(%ebp),%edx   #ptail=newnode
		movl	-4(%ebp),%eax
		movl	%eax,(%edx)

		movl	12(%ebp),%ebx  #ptail->next=pHwad
		movl	(%ebx),%ebx
		movl	8(%ebp),%edx
		movl	(%edx),%edx
		movl	%edx,8(%ebx)
		
		movl	%ebx,(%edx) #phead->prve=ptail

		jmp		label_eplog2



	label_malloc_faild1:	
		movl	$msg_memory_allocation_faild,(%esp)
		call	printf


	label_eplog2:
		movl	%ebp,%esp
		popl	%ebp
		ret


.globl CountNode
.type  CountNode,@function
	CountNode:

		pushl	%ebp
		movl	%esp,%ebp
		subl 	$16,%esp
		
		movl	$0,-4(%ebp)

		movl	8(%ebp),%eax
		cmpl	$0,%eax
		je      label_list_empty1	


	label_count_element:

		addl	$1,-4(%ebp)

		movl	8(%ebp),%eax
		movl	8(%eax),%eax
		movl	%eax , 8(%ebp)
		movl	12(%ebp) , %edx
		cmpl	8(%edx) ,%eax
		jne 	label_count_element
		jmp		label_eplog3



	label_list_empty1:
		movl	$0,%eax		
		jmp 	label_eplog3

	label_eplog3:
		movl	-4(%ebp),%eax
		movl	%ebp,%esp
		popl	%ebp
		ret		

.globl InsertAtPos
.type	InsertAtPos,@function
	InsertAtPos:

		pushl	%ebp
		movl	%esp,%ebp
		
		subl 	$32,%esp
		


		movl	$0,-4(%ebp)   #newnode
		movl	$0,-8(%ebp)   #pTemp
			
		movl	8(%ebp),%eax
		movl	12(%ebp),%edx

		movl	(%eax),%eax
		movl	(%edx),%edx
		
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call	CountNode
		movl	%eax,-12(%ebp)
		
		movl	20(%ebp),%eax
		cmpl	$0,%eax
		jle 	label_invalid_pos
		
		movl	-12(%ebp),%edx
		addl	$1,%edx
		cmpl	%edx,%eax
		jg      label_invalid_pos

		movl	20(%ebp),%eax
		cmpl 	$1,%eax
		jne 	label_last
		
		movl	8(%ebp),%eax
		movl	12(%ebp),%edx
		movl	16(%ebp),%ecx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		movl	%ecx,8(%esp)
		call	InsertFirst
		jmp		label_eplog4

	label_last:	
		movl	20(%ebp),%eax
		movl	-12(%ebp),%edx
		addl	$1,%edx
		cmpl	%eax,%edx
		jne		label_atpos_insert
		movl	8(%ebp),%eax
		movl	12(%ebp),%edx
		movl	16(%ebp),%ecx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		movl	%ecx,8(%esp)
		call	Insertlast
		
		jmp		label_eplog4		


	label_atpos_insert:
		movl	8(%ebp),%eax
		movl	(%eax),%eax
		movl	%eax,-8(%ebp)
		movl	$1,-12(%ebp)
		jmp 	while_condition

	while_loop:
		 addl	$1,-12(%ebp)
		 movl	-8(%ebp),%edx
		 movl	8(%edx),%edx
		 movl	%edx,-8(%ebp)
	
	while_condition:	 
		 movl	-12(%ebp),%eax
		 movl	20(%ebp),%edx
		 subl	$1,%edx
		 cmpl	%edx,%eax
		 jl 	while_loop


		movl	$12,(%esp)
		call	malloc
		movl	%eax,-4(%ebp)
		cmpl	$0,%eax
		je 		label_malloc_faild3

		movl	16(%ebp),%eax
		movl	-4(%ebp),%edx
		movl	%eax,4(%edx)

		movl	-8(%ebp),%ebx   
		movl	8(%ebx),%ebx

		movl	%ebx,8(%edx)    #pNewNode->pNext = pTemp->pNext

		movl	%edx,(%ebx)     #pTemp->next->prev=newnod
	
		movl	-8(%ebp),%ebx
		movl	%edx,8(%ebx) 		#temp-<next=newnode
		movl	%ebx,(%edx)        #newnode->pPrev=temp

		jmp 	label_eplog4



	label_invalid_pos:
		movl	$msg_position_invalid,(%esp)
		call    printf
		jmp		label_eplog4


	label_malloc_faild3:
		movl	$msg_memory_allocation_faild,(%esp)
		call	printf
		

	label_eplog4:
		movl	%ebp,%esp
		popl	%ebp
		ret


.globl Display
.type	Display,@function
	
	Display:

		pushl	%ebp
		movl	%esp, %ebp
	
		subl	$16 , %esp
		
		movl	8(%ebp) , %eax
		cmpl	$0 , %eax
		je 		label_list_empty

		movl	$msg_linked_list , (%esp)
		call	printf

	label_print_element:
			
		movl	8(%ebp),%eax
		movl	4(%eax),%eax
		movl	$msg_print_list,(%esp)
		movl	%eax,4(%esp)
		call	printf
		movl	8(%ebp),%eax
		movl	8(%eax),%eax
		movl	%eax , 8(%ebp)
		movl	12(%ebp) , %edx
		cmpl	8(%edx) ,%eax
		jne 	label_print_element
		jmp		label_eplog


	label_list_empty:
		movl	$msg_list_empty,(%esp)
		call	printf
		jmp		label_eplog

	label_eplog:
		
		movl	%ebp,%esp
		popl	%ebp
		ret


.globl DeleteFirst
.type	DeleteFirst,@function
	DeleteFirst:
		
		pushl	%ebp
		movl	%esp,%ebp

		subl	$16 ,%esp
		
	 	movl	8(%ebp),%eax
	 	cmpl	$0 ,(%eax)
	 	je		label_list_Null

	 	movl	(%eax) , %eax
	 	movl	4(%eax) , %eax
	 	movl	%eax , -4(%ebp)

	 	movl	8(%ebp) , %eax
	 	movl	(%eax) , %ebx
	 	movl	12(%ebp) , %edx
	 	movl	(%edx),%ecx
	 	cmpl	%ebx ,%ecx
	 	jne		label_more_than_one_node

	 	movl	$0,8(%ebx)
	 	movl	$0,(%ebx)
	 	movl	(%eax),%eax
	 	movl	%eax,(%esp)
		call	free
	 	
	 	movl	8(%ebp),%eax
	 	movl	$0,(%eax)
	 	movl	12(%ebp),%edx
	 	movl	$0,(%edx)
	 	movl    -4(%ebp),%eax
	 	jmp 	label_eplog9

	label_more_than_one_node :
	 	
	 	movl	8(%ebp),%eax
	 	movl	(%eax),%ebx
	 	movl	8(%ebx),%ebx
	 	movl	%ebx,(%eax)
	 	

	 	movl	12(%ebp),%eax
	 	movl	(%eax),%eax
	 	movl	8(%eax),%eax
	 	movl	$0,8(%eax)
	 	
	 	movl	12(%ebp),%eax
		movl	(%eax),%eax
		movl	8(%eax),%eax
		movl	$0,(%eax)	

	 	movl	12(%ebp),%eax
	 	movl	(%eax),%eax
	 	movl	8(%eax),%eax
	 	movl	%eax,(%esp)
	 	call	free
	 	

	 	movl	12(%ebp) , %eax
	 	movl	(%eax) , %eax
	 	movl	8(%ebp) , %edx
	 	movl	(%edx) , %edx
	 	movl	%edx , 8(%eax)
	 	movl	%eax , (%edx)
	 	movl	-4(%ebp),%eax
	 	jmp 	label_eplog9



	label_list_Null :
		movl	$-1 , %eax

	label_eplog9 :

	 	movl	%ebp,%esp
		popl	%ebp
		ret	

.globl DeleteLast
.type	DeleteLast,@function
	DeleteLast:
		
		pushl	%ebp
		movl	%esp,%ebp

		subl	$16 ,%esp
		
	 	movl	8(%ebp),%eax
	 	cmpl	$0 ,(%eax)
	 	je		label_list_Null1

	 	movl	12(%ebp),%eax
	 	movl	(%eax) , %eax
	 	movl	4(%eax) , %eax
	 	movl	%eax , -4(%ebp)

	 	movl	8(%ebp) , %eax
	 	movl	(%eax) , %ebx
	 	movl	12(%ebp) , %edx
	 	movl	(%edx),%ecx
	 	cmpl	%ebx ,%ecx
	 	jne		label_more_than_one_node1


	 	movl    8(%ebp),%eax
	 	movl	(%eax),%eax
	 	movl	$0,8(%eax)
	 	movl	$0,(%eax)
	 	movl	%eax,(%esp)
		call	free
	 	
	 	movl	8(%ebp),%eax
	 	movl	$0,(%eax)
	 	movl	12(%ebp),%edx
	 	movl	$0,(%edx)

	 	movl    -4(%ebp),%eax
	 	jmp 	label_eplog10

	label_more_than_one_node1 :
	 	
	 	movl	12(%ebp),%eax
	 	movl	(%eax),%ebx
	 	movl	(%ebx),%ebx
	 	movl	%ebx,(%eax)
	 	

	 	movl	8(%ebp),%eax
	 	movl	(%eax),%eax
	 	movl	(%eax),%eax
	 	movl	$0,8(%eax)
	 	movl	$0,(%eax)
	 	
	 	movl	(%eax),%eax
	 	movl	%eax,(%esp)
	 	call    free


	 	movl	12(%ebp) , %eax
	 	movl	(%eax) , %eax
	 	movl	8(%ebp) , %edx
	 	movl	(%edx) , %edx
	 	movl	%edx , 8(%eax)
	 	movl	%eax , (%edx)

	 	movl	-4(%ebp),%eax
	 	jmp 	label_eplog10



	label_list_Null1 :
		movl	$-1 , %eax

	label_eplog10 :

	 	movl	%ebp,%esp
		popl	%ebp
		ret	

.globl DeleteAtPosition
.type	DeleteAtPosition,@function
	DeleteAtPosition:

		pushl	%ebp
		movl	%esp,%ebp

		subl	$16 ,%esp
		movl	$0,-4(%ebp)

		movl	8(%ebp),%eax
		movl	(%eax),%eax
		movl	12(%ebp),%edx
		movl	(%edx),%edx

		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call	CountNode

		movl	%eax,-8(%ebp)
		movl	16(%ebp),%edx
		cmpl	$0,%edx
		jle 	label_invalid_pos1
		cmpl	%eax,%edx
		jg      label_invalid_pos1

		cmpl	$1,%edx
		jne 	label_last_position
		movl	8(%ebp),%eax
		movl	12(%ebp),%edx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call 	DeleteFirst

		jmp		label_eplog11
		
	label_last_position:
		movl	16(%ebp),%eax
		movl	-8(%ebp),%edx
		cmpl	%edx,%eax
		jne 	label_middle_position

		movl	8(%ebp),%eax
		movl	12(%ebp),%edx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call	DeleteLast

		jmp	    label_eplog11

	label_middle_position:
		movl	8(%ebp),%eax
		movl	(%eax),%eax
		movl	%eax,-4(%ebp)

		movl	$1,-8(%ebp)
		jmp 	label_while_condition1

	label__while_body1:

		addl     $1,-8(%ebp)
		movl	-4(%ebp),%eax
		movl	8(%eax),%edx
		movl	%edx,-4(%ebp)

	label_while_condition1:	
		movl	-8(%ebp),%eax
		movl	16(%ebp),%edx
		cmpl	%edx,%eax
		jl 		label__while_body1


		movl	-4(%ebp),%eax
		movl	8(%eax),%ebx
		movl	(%eax),%eax
		movl	%ebx,8(%eax)


		movl	-4(%ebp),%eax
		movl	(%eax),%ebx
		movl	8(%eax),%eax
		movl	%ebx,(%eax)

		movl	-4(%ebp),%eax
		movl	$0,(%eax)
		movl	$0,8(%eax)

		movl	4(%eax),%edx
		movl	%edx,-8(%ebp)

		movl 	%eax,(%esp)
		call	free

		movl	-8(%ebp),%eax
		jmp 	label_eplog11	

	label_invalid_pos1:
		movl	$msg_position_invalid,(%esp)
		call	printf
		movl	$-2,%eax	
	
	label_eplog11:
	 	movl	%ebp,%esp
		popl	%ebp
		ret	
		
.globl SearchFirstOccurance
.type	SearchFirstOccurance,@function
	SearchFirstOccurance:

		pushl	%ebp
		movl	%esp, %ebp
	
		subl	$16 , %esp
		movl	$0,-4(%ebp)
		movl	8(%ebp),%eax
		cmpl	$0,%eax
		je 		label_list_empty2


		addl	$1,-4(%ebp)

		do_while_loop:

			movl	8(%ebp),%eax
			movl	4(%eax),%eax
			movl	16(%ebp),%edx
			cmpl 	%eax,%edx
			je 		label_actual_pos	

			addl	$1,-4(%ebp)

			movl	8(%ebp),%eax
			movl	8(%eax),%eax
			movl	%eax , 8(%ebp)
			movl	12(%ebp),%edx
			cmpl	8(%edx) ,%eax
			jne 	do_while_loop
			
			movl	8(%ebp),%eax
			movl	12(%ebp),%edx
			movl	8(%edx),%edx
			cmpl	%eax,%edx
			je 		label_data_not_found
			movl	-4(%ebp),%eax
			cmpl	$1,%eax
			jne 	label_data_not_found

	label_actual_pos:
		movl	-4(%ebp),%eax
		jmp		label_eplog5		 	

	label_data_not_found :
		movl	$-2,%eax
		jmp		label_eplog5

	label_list_empty2:
		movl	$-1,%eax		

	label_eplog5:
		movl	%ebp,%esp
		popl	%ebp
		ret

.globl SearchLastOccurance
.type  SearchLastOccurance,@function
	SearchLastOccurance:

		pushl	%ebp
		movl	%esp, %ebp
	
		subl	$16 , %esp
		movl	$0,-4(%ebp)
		movl	$0,-8(%ebp)

		movl	8(%ebp),%eax
		cmpl	$0,%eax
		je 		label_list_empty3


		addl	$1,-4(%ebp)

		do_while_loop1:

			movl	8(%ebp),%eax
			movl	4(%eax),%eax
			movl	16(%ebp),%edx
			cmpl 	%eax,%edx
			jne 	next_step
			movl	-4(%ebp),%eax
			movl	%eax,-8(%ebp)		 		


		next_step:	
			addl	$1,-4(%ebp)

			movl	8(%ebp),%eax
			movl	8(%eax),%eax
			movl	%eax , 8(%ebp)
			movl	12(%ebp),%edx
			cmpl	8(%edx) ,%eax
			jne 	do_while_loop1
			
			movl	-8(%ebp),%eax
			cmpl	$0,%eax
			je 		label_data_not_found1

			movl	-8(%ebp),%eax
			jmp		label_eplog6

	
	label_data_not_found1:
		movl	$-2,%eax
		jmp		label_eplog5		

	label_list_empty3:
		movl	$-1,%eax		

	label_eplog6:
		movl	%ebp,%esp
		popl	%ebp
		ret


.globl SearchAllOccurance
.type  SearchAllOccurance,@function
	SearchAllOccurance:

		pushl	%ebp
		movl	%esp, %ebp
	
		subl	$16 , %esp
		movl	$0,-4(%ebp)
		
		movl	8(%ebp),%eax
		cmpl	$0,%eax
		je 		label_eplog7


		do_while_loop2:

			movl	8(%ebp),%eax
			movl	4(%eax),%eax
			movl	16(%ebp),%edx
			cmpl 	%eax,%edx
			jne 	next_step1
			addl	$1,-4(%ebp)
			

		next_step1:	
			movl	8(%ebp),%eax
			movl	8(%eax),%eax
			movl	%eax , 8(%ebp)
			movl	12(%ebp),%edx
			cmpl	8(%edx) ,%eax
			jne 	do_while_loop2
			

	
	label_eplog7:
		movl	-4(%ebp),%eax
		movl	%ebp,%esp
		popl	%ebp
		ret


.globl ReverseDisplay
.type  ReverseDisplay,@function
	ReverseDisplay:

		pushl	%ebp
		movl	%esp, %ebp
	
		subl	$16 , %esp

		movl	$msg_reverse_display,(%esp)
		call	printf

		movl	12(%ebp),%eax
		cmpl	$0,%eax
		je 		label_list_empty4

		do_while_loop3:
			movl	12(%ebp),%eax
			movl	4(%eax),%eax
			movl	$msg_print_list,(%esp)
			movl	%eax,4(%esp)
			call	printf

			movl	12(%ebp),%eax
			movl	(%eax),%eax
			movl	%eax,12(%ebp)
			movl	8(%ebp),%edx
			cmpl	(%edx),%eax
			jne 	do_while_loop3
			jmp 	label_eplog8

	label_list_empty4:		
		movl	$msg_list_empty,(%esp)
		call	printf	
		
	label_eplog8:
		movl	%ebp,%esp
		popl	%ebp
		ret


.globl DeleteAllNode
.type	DeleteAllNode,@function
	DeleteAllNode:

		pushl	%ebp
		movl	%esp,%ebp

		subl	$16,%esp

		movl	8(%ebp),%eax
		cmpl	$0,(%eax)
		je 		label_eplog12
		
		jmp		label_while_condition

	label__while_body:
		movl	$0,(%eax)
		movl	8(%eax),%edx
		movl	8(%ebp),%eax
		movl	%edx,(%eax)

		movl	8(%edx),%ebx
		movl	$0,8(%ebx)

		movl	%ebx,(%esp)
		call	free

		movl	12(%ebp),%eax
		movl	(%eax),%eax
		movl	8(%ebp),%edx
		movl	(%edx),%edx
		movl	%edx,8(%eax)

	label_while_condition:
		movl	8(%ebp),%eax
		movl	12(%ebp),%edx
		movl	(%eax),%eax
		movl	(%edx),%edx
		cmpl	%eax,%edx
		jne 	label__while_body

		movl	8(%ebp),%eax
		movl	(%eax),%eax
		movl	$0,(%eax)
		movl	$0,8(%eax)

		movl	%eax,(%esp)
		call	free
	
		movl	8(%ebp),%eax
		movl	$0,(%eax)
		movl	12(%ebp),%eax
		movl	$0,(%eax)

		movl	$msg_all_node_delete,(%esp)
		call    printf	


	label_eplog12 :
		movl	%ebp,%esp
		popl	%ebp
		ret


