.section .rodata
	msg_main_Menus:
	.string "\n\t 1.Addition \n\t 2.Substraction \n\t 3.Multiplation \n\t 4.Divition \n "
	msg_main_Input_print:
	.string "Enter a Choice :"
	msg_main_Input_scan:
	.string "%d"
	msg_main_if_Addition:
	.string "Addition \n"
	msg_main_Elseif_Substraction:
	.string "Substraction \n"
	msg_main_Elseif_Multiplaction:
	.string "Multiplaction \n "
	msg_main_Elseif_Division:
	.string "Division \n"
	msg_main_Else_Invalid_Choice:
	.string "Choice is Invalid \n"
.section .text
.globl main
.type main,@function
	main:
		pushl %ebp
		movl %esp,%ebp

		subl $4,%esp
		pushl $msg_main_Menus
		call printf
		addl $4,%esp

		pushl $msg_main_Input_print
		call printf
		addl $4,%esp

		leal -4(%ebp),%ebx
		pushl %ebx
		pushl $msg_main_Input_scan
		call scanf
		addl $8,%esp

		movl -4(%ebp),%eax
		cmpl $1,%eax
		jne Lebel_Elseif_Substraction
		
		pushl $msg_main_if_Addition
		call printf
		addl $4,%esp
		jmp Lebel_Exit

Lebel_Elseif_Substraction:
	cmpl $2,%eax
	jne Lebel_Elseif_Multiplaction

	pushl $msg_main_Elseif_Substraction
	call printf
	addl $4,%esp
	jmp Lebel_Exit

Lebel_Elseif_Multiplaction:
	cmpl $3,%eax
	jne Lebel_Elseif_Division


	pushl $msg_main_Elseif_Multiplaction
	call printf
	addl $4,%esp
	jmp Lebel_Exit

Lebel_Elseif_Division:
	cmpl $4,%eax
	jne Lebel_Else_Invalide
	

	pushl $msg_main_Elseif_Division
	call printf
	addl $4,%esp
	jmp Lebel_Exit

Lebel_Else_Invalide	:
	pushl $msg_main_Else_Invalid_Choice
	call printf
	addl $4,%esp	

Lebel_Exit:
	pushl $0
	call exit
	