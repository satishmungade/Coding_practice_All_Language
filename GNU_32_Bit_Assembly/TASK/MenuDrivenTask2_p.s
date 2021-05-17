.section .rodata
	msg_main_menus:
	.string "\n\t 1.Addition :- \n\t 2.Substraction :- \n\t 3.Multiplaction :- \n\t 4.Division :- \n\t 5.Exit :-\n"
	msg_main_input_choice_print:
	.string "\n Enter Your Choice :"
	msg_main_input_choice_scan:
	.string "%d"
	msg_main_input_print:
	.string "\n\t Enter Two Number for Arithmatic Operation :"
	msg_main_input_scan:
	.string	"%d%d"
	msg_main_valid_choice:
	.string "\n\t Enter valid choice :\n"
	msg_main_ans:
	.string "\n\t Ans is :%d"
	msg_main_renter_print:
	.string "\n\n\t Are You want to Enter Choice(Yes /1)(No/0) :"
	msg_main_renter_scan:
	.string "%d"
	msg_main_thank_you:
	.string "\n Thank-You for Using Appication \n"

.section .text 
.globl main 
.type main, @function 
	main:

		pushl %ebp
		movl  %esp,%ebp
		subl  $16,%esp
		
		movl  $0,-16(%esp)

Do_Body:

	pushl $msg_main_menus		#do while use direct one time entry any condition
	call  printf
	addl  $4,%esp

	pushl $msg_main_input_choice_print
	call  printf
	addl  $4,%esp

	leal  -16(%ebp),%ebx
	pushl %ebx
	pushl $msg_main_input_choice_scan
	call  scanf
	addl  $4,%esp

	movl  -16(%ebp),%ebx
	cmpl  $0,%ebx				#check 1 to 5 choise
	je    label_switch
	cmpl  $5,%ebx
	jge  label_switch

	pushl $msg_main_input_print 	#if proper choice than take input from user
	call  printf
	addl  $4,%esp

	leal  -4(%ebp),%eax
	leal  -8(%ebp),%edx
	pushl %edx
	pushl %eax
	pushl $msg_main_input_scan
	call  scanf
	addl  $12,%esp

	movl -4(%ebp),%eax				#optimize first value kadunch label call
	movl -8(%ebp),%edx

label_switch :	
	movl -16(%ebp),%ebx
	
	cmpl $1,%ebx
	je label_switch_1
	cmpl $2,%ebx
	je label_switch_2
	cmpl $3,%ebx
	je label_switch_3
	cmpl $4,%ebx
	je label_switch_4
	cmpl $5,%ebx
	je Lebel_Exit
	jne label_switch_Invalid

label_switch_1:
	pushl %edx
	pushl %eax					#Addition opertion perfrom call addition function
	call Addition
	movl %eax,-12(%ebp)
	addl  $8,%esp
	jmp Label_break

label_switch_2:
	pushl %edx
	pushl %eax
	call 2.Substraction 	#substraction opertion perfrom call substraction function
	movl %eax,-12(%ebp)
	addl  $8,%esp
	jmp Label_break

label_switch_3:
	pushl %edx
	pushl %eax
	call Multiplaction 		#multiplaction 	
	movl %eax,-12(%ebp)
	addl  $8,%esp
	jmp Label_break

label_switch_4:
	pushl %edx
	pushl %eax
	call Division 			#division
	movl %eax,-12(%ebp)
	addl  $8,%esp
	jmp Label_break

label_switch_Invalid:	
	pushl $msg_main_valid_choice
	call printf
	addl $4,%esp
	movl $1,-16(%ebp)
	jl Do_Body
			
Label_break:
	movl -12(%ebp),%eax
	pushl %eax
	pushl $msg_main_ans
	call printf
	addl $8,%esp

	pushl $msg_main_renter_print
	call printf
	addl $4,%esp
	
	leal -16(%ebp),%ebx
	pushl %ebx 
	pushl $msg_main_renter_scan
	call scanf
	addl $8,%esp

	movl -16(%ebp),%ebx
	cmpl $1,%ebx
	je Do_Body

Lebel_Exit:	
	pushl $msg_main_thank_you	
	call printf
	addl $4,%esp
	pushl $0
	call exit


.globl Addition 
.type Addition, @function 
	Addition:
		pushl %ebp
		movl %esp ,%ebp
		subl $4,%esp

		movl 8(%ebp),%eax
		movl 12(%ebp),%edx

		addl %edx,%eax
		movl %eax,-4(%ebp)

		movl %ebp,%esp
		popl %ebp
		ret 

.globl Substraction
.type Substraction,@function
	Substraction :
		
		pushl %ebp
		movl %esp,%ebp

		subl $4,%esp

		movl 8(%ebp),%eax
		movl 12(%ebp),%edx

		subl %edx,%eax
		movl %eax,-4(%ebp)

		movl %ebp,%esp
		popl %ebp
		ret 

.globl Multiplaction
.type Multiplaction,@function
	Multiplaction:
		
		pushl %ebp
		movl %esp,%ebp

		subl $4,%esp

		movl 8(%ebp),%eax
		movl 12(%ebp),%ecx
		
		mul %ecx
		movl %eax,-4(%ebp)

		movl %ebp,%esp
		popl %ebp
		ret

.globl Division
.type Division,@function
	Division:

		pushl %ebp
		movl %esp,%ebp

		subl $4,%esp
		xorl %edx,%edx
		movl 8(%ebp),%eax
		movl 12(%ebp),%ecx

		divl %ecx
		movl %eax,-4(%ebp)

		movl %ebp,%esp
		popl %ebp
		ret
