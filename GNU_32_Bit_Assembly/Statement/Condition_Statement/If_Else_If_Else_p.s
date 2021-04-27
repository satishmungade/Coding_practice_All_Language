.section .rodata
	msg_main_print1:
	.string "\n Enter One  Number :"
	msg_main_scan:
	.string "%d"
	msg_main_less:
	.string " Number is Less 2\n"
	msg_main_grater:
	.string " Number is Greater 2\n"
	msg_main_equal:
	.string " Number is Equal 2 \n"

.section .text
.globl main
.type main,@function
	main:
		pushl %ebp
		movl %esp,%ebp

		subl $4,%esp

		pushl $msg_main_print1
		call printf
		addl $4,%esp

		leal -4(%ebp),%ebx
		pushl %ebx
		pushl $msg_main_scan
		call scanf
		addl $8,%esp

		movl -4(%ebp),%eax
		cmpl $2,%eax
		jg Label_Is_Grater
		je Label_Is_Equal
		
		pushl $msg_main_less
		call printf
		addl $4,%esp
		jmp Label_Exit


Label_Is_Equal:
	pushl $msg_main_equal
	call printf
	addl $4,%esp
	jmp Label_Exit


Label_Is_Grater:
	pushl $msg_main_grater
	call printf
	addl $4,%esp
	jmp Label_Exit

Label_Exit:
	pushl $0
	call exit
