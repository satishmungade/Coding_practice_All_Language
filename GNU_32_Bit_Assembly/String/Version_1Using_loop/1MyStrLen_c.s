.section .rodata
    msg_main_input_string_print:
    .string "\n Enter Your String :"
    
    msg_main_print_lenght:
    .string "\n Your String Length is :%d \n "

.equ  MAX, 255

.section .text
.globl main	
.type main,@function
    main:
	
		pushl	%ebp
		movl	%esp,%ebp
		
		andl	$-16,%esp
		subl    $272,%esp

		movl	$msg_main_input_string_print,(%esp)
		call    printf

        leal    -255(%ebp),%ebx
        movl    %ebx,(%esp)
        call 	gets 

       	leal	-255(%ebp),%ebx
       	movl	%ebx,(%esp)
		call	mystrlen

		movl    $msg_main_print_lenght,(%esp)
		movl	%eax,4(%esp)
		call	printf

		movl    $0,(%esp)
		call	exit

.globl mystrlen	
.type mystrlen,@function
	mystrlen:	

		pushl	%ebp
		movl	%esp,%ebp

		subl 	$16,%esp

		movl	8(%ebp),%esi
		movl	$MAX,%ecx
		movl	$0,%edx
	
	label_loop:
		
		xorl 	%eax,%eax
		lodsb
		cmpl 	$0,%eax
		je 		label_out
		addl	$1,%edx
		loop 	label_loop	

	label_out:
		movl	%edx,%eax
		movl	%ebp,%esp
		popl 	%ebp
		ret

		
