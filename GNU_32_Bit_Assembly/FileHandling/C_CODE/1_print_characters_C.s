.section .rodata
	msg_print:
	.string "\n cant open file"

	msg_char_print:
	.string "%c"

	msg_file_name:
	.string "print_characters.txt"

	msg_mode:
	.string "r"

.section .text
.globl main	
.type main,@function
	main:

		pushl	%ebp
		movl 	%esp,%ebp

		andl	$-16,%esp
		subl 	$16,%esp

		
		movl 	$msg_file_name,(%esp)
		movl	$msg_mode,4(%esp)
		call	fopen
		movl	%eax,-4(%ebp)

		cmpl	$0,%eax
		jne 	label_while_loop
		movl	$msg_print,(%esp)
		call	printf
		movl	$-1,(%esp)
		call	exit

	
	label_while_loop:		

		
		xorl	%eax,%eax
		movl	-4(%ebp),%edx
		movl	%edx,(%esp)
		call	fgetc
		movb	%al,-5(%ebp)
		cmpl	$-1,%eax
		je 		ep_log
		
		movl	$msg_char_print,(%esp)
		movb	%al,4(%esp)
		call	printf
		jmp 	label_while_loop
		


	ep_log:	
		
		movl	-4(%ebp),%eax
		movl	%eax,(%esp)
		call	fclose
		movl	$0,-4(%ebp)
		
		movl	$0,(%esp)
		call	exit


	