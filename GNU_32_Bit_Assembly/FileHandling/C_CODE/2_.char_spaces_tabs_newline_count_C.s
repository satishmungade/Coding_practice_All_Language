.section .rodata
	
	file_name:
	.string "char_space_tab_newline_count.txt"

	msg_print:
	.string "\n cant open file"

	msg_no_char:
	.string "\n No of characters are :%d"

	msg_no_space:
	.string "\n No of space are : %d"

	msg_no_tab:
	.string "\n No of Tab are :%d"

	msg_no_line:
	.string "\n No of Line  are : %d"


	msg_mode:
	.string "r"




.section .text
.globl main	
.type main,@function
	main:
		pushl	%ebp
		movl 	%esp,%ebp

		andl	$-16,%esp
		subl 	$32,%esp

		
		movl 	$file_name,(%esp)
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
		movb	%al,-21(%ebp)
		cmpl	$-1,%eax
		je 		ep_log
		
	
		movl	$1,-8(%ebp)

		cmpl	$32,%eax
		jne 	jmp_else_tab
		movl	$1,-12(%ebp)

	jmp_else_tab:
		cmpl	$11,%eax
		jne     jmp_else_line	
		movl	$1,-16(%ebp)

	jmp_else_line:	
		cmpl	$10,%eax
		jne 	jmp_continue
		movl	$1,-20(%ebp)


	jmp_continue:	
		jmp 	label_while_loop
		


	ep_log:	
		
		movl	-4(%ebp),%eax
		movl	%eax,(%esp)
		call	fclose
		movl	$0,-4(%ebp)
		

		movl  	-8(%ebp),%eax
		movl	$msg_no_char,(%esp)
		movl	%eax,4(%esp)
		call	printf

		movl  	-12(%ebp),%eax
		movl	$msg_no_space,(%esp)
		movl	%eax,4(%esp)
		call	printf
		
		movl  	-16(%ebp),%eax
		movl	$msg_no_tab,(%esp)
		movl	%eax,4(%esp)
		call	printf
		
		movl  	-20(%ebp),%eax
		movl	$msg_no_line,(%esp)
		movl	%eax,4(%esp)
		call	printf
				
		

		movl	$0,(%esp)
		call	exit

	