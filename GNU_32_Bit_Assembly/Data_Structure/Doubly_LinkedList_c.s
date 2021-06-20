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
	.string "\n\t 1.InsertFirst :\n\t 2.InsertLast :\n\t 3.InsertAtPosition :\n\t 4.Back :\n "
	
	msg_insert_element_printf:
	.string "\n\t Enter data to be insert :"
	msg_insert_element_scanf:
	.string "%d"

	
	#delete Rodata

	msg_delete_menu_printf:
	.string "\n\t1.DeleteFirst : \n\t2.DeleteLast :\n\t3.DeleteAtPosition :\n\t4.Back :\n"
	
	msg_delete_empty:
	.string "\n\t Linked List is Empty Deletion Impossiabl\n"

	
	#search rodata
	msg_search_empty:
	.string "\n\t Linked List is Empty Searching Impossiabl\n"

	msg_search_menu_printf:
	.string "\n\t1.SearchFirstOccurance : \n\t2.SearchLastOccurance :\n\t3.SearchAllOccurance :\n\t4.back :\n"
	
	msg_enter_data_search_printf:
	.string "\n\t Enter Data To be Search :"
	msg_enter_data_search_scanf:
	.string "%d"
	
	msg_data_not_found:
	.string "\n\t Data Not Found :"
	msg_list_empty:
	.string "\n\t Linked List is Empty :\n"
	msg_data_found_at_position:
	.string "\n\t Data Found At %d Position :"
	msg_found_time:
	.string "\n\t Data Found %d Times :"

	#count Rodata

	msg_total_count:
	.string "\n\t Total Node is Present :%d"


	msg_end_bye:
	.string	"\n bye ...\n"


.section .bss
	.comm List ,12,4

.section .text
.globl main	
.type main,@function
main:
	
		pushl	%ebp
		movl	%esp,%ebp
		
		andl	$-16,%esp
		subl    $48,%esp  #-4 ino,-8ipose,-12choice,-16 pfist,-20plast,next 16 call parameter

		movl	$0,-12(%ebp)

while_body:
		
		movl	$msg_main_allmenu_printf,(%esp)
		call 	printf
		movl	$msg_main_all_menu_your_choice_printf,(%esp)
		call	printf
		
		leal	-12(%ebp),%ebx
		movl	$msg_main_all_menu_your_choice_scanf,(%esp)
		movl 	%ebx,4(%esp)
		call 	scanf 

		movl	-12(%ebp),%eax

	labe_switch:
		cmpl	$1,%eax
		je 		label_switch_insert1
		cmpl	$2,%eax
		je 	    label_switch_Delete2
		cmpl	$3,%eax
		je 		label_switch_search3
		cmpl	$4,%eax
		je 		label_switch_count4
		cmpl	$5,%eax
		je 		label_switch_reverse_dispaly5
		cmpl	$6,%eax
		je		label_switch_exit6
		jmp		label_default

	
	label_switch_insert1:
		while_body_insert:
			movl	$msg_insert_menu_printf,(%esp)
			call	printf
			movl	$msg_your_choice_printf,(%esp)
			call	printf
			leal	-12(%ebp),%ebx
			movl	$msg_your_choice_scanf,(%esp)
			movl	%ebx,4(%esp)
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

		movl	-4(%ebp),%eax
		leal 	-16(%ebp),%ebx
		leal 	-20(%ebp),%edx
		lebel_insert_first:
			movl	%ebx,(%esp)
			movl	%edx,4(%esp)
			movl	%eax,8(%esp)
			call 	InsertFirst
			jmp  while_body_insert	

		label_insert_last:
			#Insertlast call
			jmp 	while_body_insert		

		label_insert_at_pos:
			movl	$msg_enter_pos_printf,(%esp)
			call	printf
			leal 	-8(%ebp),%ebx
			movl	$msg_enter_pos_scanf,(%esp)
			movl	%ebx,4(%esp)
			call	scanf
			#InsertAtpos call

		#Display call
	jmp 	while_body
	
	label_switch_Delete2:
		
		#null check:
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
			jmp 	label_switch_default



				label_switch_deletefirst:
					#deletefirst call
					jmp while_body

				label_switch_deletelast:
					#deletefirst call
					jmp while_body
				label_switch_deleteatpos:
					movl	$msg_enter_pos_printf,(%esp)
					call	printf
					leal 	-8(%ebp),%ebx
					movl	$msg_enter_pos_scanf,(%esp)
					movl	%ebx,4(%esp)
					call	scanf
					#call deleteatpos
					jmp 	while_body

				
				label_switch_default:
					movl	$msg_valid_choice,(%esp)
					call	printf
					movl	$4,-12(%ebp)
					jmp 	while_body_delete

				#delete data get		


	jmp while_body				
	label_switch_search3:
		#Nullcheking

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

			#dispaly call

			cmpl	$0,%eax
			jle		label_valid_choice1
			cmpl	$3,%eax
			jg	 	label_valid_choice1

			movl	$msg_enter_data_search_printf,(%esp)
			call	printf
			leal	-4(%ebp),%ebx
			movl	$msg_enter_data_search_scanf,(%esp)
			movl	%ebx,4(%esp)
			call	scanf



			cmpl	$1,%eax
			je 		label_first_occurance1
			cmpl	$2,%eax
			je 		label_last_occurance2
			cmpl	$3,%eax
			je 		label_all_occurance3


				label_first_occurance1:
					#call firstocc
					movl	-4(%ebp),%eax
					cmpl 	$-1,%eax
					je 		list_empty
					cmpl	$-2,%eax
					je 		data_not_found
					movl	$msg_data_found_at_position,(%esp)
					movl	%eax,4(%esp)
					call	printf
					jmp while_body

				label_last_occurance2:
					#call last
					movl	-4(%ebp),%eax
					cmpl 	$-1,%eax
					je 		list_empty
					cmpl	$-2,%eax
					je 		data_not_found
					movl	$msg_data_found_at_position,(%esp)
					movl	%eax,4(%esp)
					call 	printf
					jmp while_body

				label_all_occurance3:
					#call lll
					movl	-4(%ebp),%eax
					cmpl 	$-1,%eax
					je 		list_empty
					cmpl	$-2,%eax
					je 		data_not_found
					movl	$msg_found_time,(%esp)
					movl	%eax,4(%esp)
					call	printf
					jmp 	while_body



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
		#display call
		#count call
		#movl	$msg_total_count,(%esp)
		#print
		jmp	while_body
	
	label_switch_reverse_dispaly5:
		#Displaycall
		#reversdispalycall
		jmp	while_body

	
	
	label_switch_exit6:	
		#display
		#deleteallcall

		movl	$msg_end_bye,(%esp)
		call	printf
		movl 	$0,(%esp)
		call	exit

	label_default:
		movl	$msg_valid_choice,(%esp)
		call	printf
		jmp 	while_body	




.globl  InsertFirst
.type InsertFirst,@function
	InsertFirst:
		pushl	%ebp
		movl	%esp,%ebp

		subl 	$16,(%esp)

		movl	$List,%ebx
		movl	%ebx,(%esp)
		call	malloc
		movl	%eax,8(%ebp)    #newNode
		cmpl	$0,%eax
		jmp		memory_allocation_faild

		movl	12(%ebp),%eax         #iNo
		movl	$List,%ebx		      #list 
		movl	%eax,8(%ebx)	      #iData=iNo

		movl	24(%ebp),%eax
		cmpl 	$0,%eax   			  #phead==NULL
		jne     phead_not_null
		movl	8(%ebp),%edx 		  #NewNode
		movl	%edx,24(%ebp)		  #phead
		movl	%edx,28(%ebp)		  #pLast
		
		movl	28(%ebp),%eax       #(pptail)->next=*phead
		movl	$List,%ebx
		movl	%eax,12(%ebx)
		
		movl	24(%ebp),%eax
		movl	%eax,4(%ebx)
		ret

	phead_not_null:
		movl	8(%ebp),%eax
		movl	24(%ebp),%edx
		movl	$List,%ebx
		movl	%edx,12(%ebx)

		movl	%eax,4(%ebx)
		movl	%eax,8(%ebp)

		movl	24(%ebp),%eax
		movl	%eax,12(%ebx)
		
		movl	28(%ebp),%eax
		movl	%eax,4(%ebx)	




.globl  Display
.type Display,@function
	Display:



memory_allocation_faild:
	movl	$msg_memory_allocation_faild,(%esp)
	call	printf
	ret	
