.section .rodata
	msg_main_input_print:
	.string "ENter a Number :"
	msg_main_input_scan:
	.string "%d"
	msg_main_Loop_print:
	.string "%d\n"

.section .text
.globl main	
.type main,@function
	main:
		pushl %ebp
		movl %esp,%ebp

		subl $8,%esp

		pushl $msg_main_input_print
		call printf
		addl $4,%esp

		leal -4(%ebp),%ebx
		pushl %ebx
		pushl $msg_main_input_scan
		call scanf
		addl $8,%esp

		movl $1,-8(%ebp)
		jmp ForLoop_Condition

For_Loop_Body:

	xorl %edx,%edx
	movl -8(%ebp),%eax
	movl $2,%ecx		
	divl %ecx				#if(ICounter % 2 == 0)

	cmpl $0,%edx
	je Label_Increment 			#if equal continue

	movl -8(%ebp),%eax
	pushl %eax					#other wise print Number
	pushl $msg_main_Loop_print
	call printf
	addl $8,%esp

Label_Increment :
	addl $1,-8(%ebp)


ForLoop_Condition:
	movl -8(%ebp),%eax
	movl -4(%ebp),%edx
	cmpl %edx,%eax
	jl For_Loop_Body

	pushl $0
	call exit
