.section .rodata
	msg_main_Menus:
	.string "\n\t 1.Addition \n\t 2.Substraction \n\t 3.Multiplation \n\t 4.Divition \n "
	msg_main_Input_print:
	.string "\n Enter a Choice :"
	msg_main_Input_scan:
	.string "%d"
	msg_main_Choice_1:
	.string " Addition \n"
	msg_main_Choice_2:
	.string " Substraction \n"
	msg_main_Choice_3:
	.string " Multiplaction \n "
	msg_main_Choice_4:
	.string " Division \n"
	msg_main_Invalid_Choice:
	.string " Choice is Invalid \n"
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
		je Lebel_One
		cmpl $2,%eax
		je Lebel_Two
		cmpl $3,%eax
		je Lebel_Three
		cmpl $4,%eax
		je Lebel_Four
		jne Lebel_Invalid 

Lebel_One:
	
	pushl $msg_main_Choice_1
	call printf
	addl $4,%esp
	jmp Lebel_Exit

Lebel_Two:
	
	pushl $msg_main_Choice_2	
	call printf
	addl $4,%esp
	jmp Lebel_Exit

Lebel_Three:
	
	pushl $msg_main_Choice_3
	call printf
	addl $4,%esp
	jmp Lebel_Exit

Lebel_Four:
	
	pushl $msg_main_Choice_4
	call printf
	addl $4,%esp
	jmp Lebel_Exit

Lebel_Invalid:

	pushl $msg_main_Invalid_Choice
	call printf
	addl $4,%esp

Lebel_Exit:		
	pushl $0
	call exit
