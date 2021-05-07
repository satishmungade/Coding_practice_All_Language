.section .rodata
	msg_main_print:
	.string "\n Enter a Object 1 values"
	
	msg_main_char_obj1_print:
	.string "\n Enter a charater :"
	msg_main_char_obj1_scan:
	.string "%c"
	
	msg_main_int_obj1_print:
	.string "\n Enter a Number :"
	msg_main_int_obj1_scan:
	.string "%d"
	
	msg_main_Short_obj1_print:
	.string "\n Enter a ShiNo :"
	msg_main_Short_obj1_scan:
	.string "%hd"


	msg_main_print_obj2:
	.string "\n Enter a Object 2 values"
	
	msg_main_char_obj2_print:
	.string "\n Enter a charater :"
	msg_main_char_obj2_scan:
	.string "%c%c"
	
	msg_main_int_obj2_print:
	.string "\n Enter a Number :"
	msg_main_int_obj2_scan:
	.string "%c%d"
	
	msg_main_Short_obj2_print:
	.string "\n Enter a ShiNo :"
	msg_main_Short_obj2_scan:
	.string "%c%hd"

	msg_main_obj1:
	.string "chChar = %c \t iNo = %d \t shortNo = %d \n"
	msg_main_obj2:
	.string " chChar = %c \t iNo = %d \t shortNo = %d \n"

.section .bss
	.comm obj1,12,4

.section .text
.globl main	
.type main,@function
	main:

		pushl	%ebp
		movl	%esp,%ebp
		subl 	$13,%esp

		pushl	$msg_main_print
		call	printf
		addl	$4,%esp

		
		pushl	$msg_main_char_obj1_print
		call	printf
		addl	$4,%esp
    
		movl	$obj1,%ebx
		leal    (%ebx),%eax
		
		pushl	%eax
		pushl	$msg_main_char_obj1_scan
		call	scanf
		addl	$8,%esp

		pushl	$msg_main_int_obj1_print
		call	printf
		addl	$4,%esp

		movl	$obj1,%ebx
		leal	4(%ebx),%eax
		
		pushl	%eax
		pushl	$msg_main_int_obj1_scan
		call	scanf
		addl	$8,%esp

		pushl	$msg_main_Short_obj1_print
		call 	printf
		addl	$4,%esp

		movl	$obj1,%ebx
		leal 	8(%ebx),%eax
		
		pushl 	%eax
		pushl 	$msg_main_Short_obj1_scan
		call  	scanf
		addl 	$8,%esp

		pushl	$msg_main_print_obj2
		call	printf
		addl	$4,%esp

		pushl	$msg_main_char_obj2_print
		call 	printf
		addl	$4,%esp

		leal 	-13(%ebp),%ebx
		leal	-12(%ebp),%eax
		
		
		pushl 	%eax
		pushl	%ebx
		pushl   $msg_main_char_obj2_scan
		call	scanf
		addl    $12,%esp

		pushl	$msg_main_int_obj1_print
		call 	printf
		addl	$4,%esp

		
		leal	-8(%ebp),%ebx
		leal 	-13(%ebp),%eax
		
		pushl	%ebx
		pushl 	%eax
		pushl   $msg_main_int_obj2_scan
		call	scanf
		addl    $12,%esp		

		pushl	$msg_main_Short_obj2_print
		call 	printf
		addl	$4,%esp

		leal	-4(%ebp),%ebx
		leal	-13(%ebp),%eax

		pushl	%ebx
		pushl	%eax
		pushl   $msg_main_Short_obj2_scan
		call	scanf
		addl	$12,%esp
		
		movl 	$obj1,%ebx
		xorl 	%eax,%eax
		movb 	(%ebx),%al	
		movl 	4(%ebx),%edx
		xorl 	%ecx,%ecx
		movw	8(%ebx),%cx

		pushl	%ecx
		pushl   %edx
		pushl	%eax
		pushl	$msg_main_obj1
		call 	printf
		addl	$16,%esp

		xorl 	%eax,%eax
		movb	-12(%ebp),%al
		movl	-8(%ebp),%edx
		xorl	%ecx,%ecx
		movw	-4(%ebp),%cx

		pushl 	%ecx
		pushl	%edx
		pushl	%eax
		pushl	$msg_main_obj2
		call 	printf
		addl	$16,%esp

		pushl 	$0
		call 	exit

