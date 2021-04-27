.section .rodata
	msg_main_print:
	.string "Enter a Number :"
	msg_main_scan:
	.string "%d"
	msg_main_Evan:
	.string "Number is Evan :\n"
	msg_main_Odd:
	.string "Number is Odd :\n"

.section .text
.globl main
.type main, @function
	main:
		pushl %ebp
		movl %esp,%ebp

		subl $4,%esp

		pushl $msg_main_print
		call printf
		addl $4,%esp

		leal -4(%ebp),%ebx
		pushl %ebx
		pushl $msg_main_scan
		call  scanf
		addl  $8,%esp

		xorl %edx,%edx
		movl -4(%ebp),%eax
		movl $2,%ecx
		divl  %ecx

		cmpl $0,%edx
		jne Label_Old
		pushl $msg_main_Evan
		call printf
		addl $4,%esp
		jmp Label_exit

Label_Old:
	pushl $msg_main_Odd
	call printf
	addl $4,%esp

Label_exit :
	pushl $0
	call exit	
