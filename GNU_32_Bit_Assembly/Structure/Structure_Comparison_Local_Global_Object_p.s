.section .rodata
	msg_main_obj1_print:
	.string " obj1 values \n"

	msg_main_obj1_value_print:
	.string " object1 values  chChar = %c, iNo = %d, shiNo = %hd\n\n"

	msg_main_obj2_print:
	.string " obj2 values \n "

	msg_main_obj2_value_print:
	.string " object2 values chChar = %c, iNo = %d, shiNo = %hd\n\n"	

	msg_main_obj3_print:
	.string " obj3 values \n"

	msg_main_obj3_value_print:
	.string " object3 values chChar = %c, iNo = %d, shiNo = %hd\n\n"

	msg_main_comparison_obj1_obj2:
	.string "obj1 & obj2 Comparison is :\n"

	msg_main_comparison_obj2_obj3:
	.string "obj2 & obj3 Comparison is :\n "

	msg_main_Equal:
	.string " Object is Equal \n"

	msg_main_NotEqual:
	.string "Object Are Not Equal \n"


.section .data		
	.globl obj1
	.type obj1,@object
	.size obj1,12
	.align 4
	obj1 :
		.ascii "A"
		.zero 3
		.int 10
		.value 20

.section .text
.globl main		
.type main,@function
	main:
		pushl	%ebp
		movl 	%esp,%ebp

		subl $24,%esp
		movl $'B',-12(%ebp)
		movl $30,-8(%ebp)
		movl $40,-4(%ebp)

		movl $'B',-24(%ebp)
		movl $30,-20(%ebp)
		movl $40,-16(%ebp)


		pushl	$msg_main_obj1_print
		call	printf
		addl	$4,%esp

		movl 	$obj1,%ebx
		xorl	%eax,%eax
		movb 	(%ebx),%al
		movl 	8(%ebx),%edx
		xorl	%ecx,%ecx
		movw 	4(%ebx),%cx

		pushl	%ecx
		pushl	%edx
		pushl   %eax
		pushl 	$msg_main_obj1_value_print
		call 	printf
		addl	$16,%esp

		pushl 	$msg_main_obj2_print
		call  	printf
		addl	$4,%esp

		xorl	%eax,%eax
		movb 	-12(%ebp),%al
		movl 	-8(%ebp),%edx
		xorl	%ecx,%ecx
		movw 	-4(%ebp),%cx

		pushl	%ecx
		pushl	%edx
		pushl   %eax
		pushl 	$msg_main_obj2_value_print
		call 	printf
		addl	$16,%esp


		pushl 	$msg_main_obj3_print
		call 	printf
		addl	$4,%esp

		xorl	%eax,%eax
		movb 	-24(%ebp),%al
		movl 	-20(%ebp),%edx
		xorl	%ecx,%ecx
		movw 	-16(%ebp),%cx

		pushl	%ecx
		pushl	%edx
		pushl   %eax
		pushl 	$msg_main_obj3_value_print
		call 	printf
		addl	$16,%esp

		pushl 	$msg_main_comparison_obj1_obj2
		call 	printf
		addl	$4,%esp

		movl 	$obj1,%ebx
		movl    -12(%ebp),%eax
		cmpl   %eax,%ebx
		je		Lebal_Equal 
		
Lebal_NotEqual:
	pushl   msg_main_NotEqual
	call    printf
	addl 	$4,%esp
	jmp Label_Exit


Lebal_Equal:
	movl  $obj1,%ebx
	movl  8(%ebx),%eax
	movl  -8(%ebp),%edx
	cmpl  %edx,%eax
	jl	Lebal_NotEqual

	movl  $obj1,%ebx
	movl 4(%ebx),%eax
	movl -4(%ebp),%edx
	cmpl  %edx,%eax
	jl 	Lebal_NotEqual

	pushl $msg_main_Equal
	call printf
	addl $4,%esp
	
Label_Exit:		
	pushl	$0
	call 	exit
