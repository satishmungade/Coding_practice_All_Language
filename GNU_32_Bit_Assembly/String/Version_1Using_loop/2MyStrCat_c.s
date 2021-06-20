.section .rodata
	msg_enter_destination_string:
	.string "\n Enter Destination String :"
	msg_enter_Source_string:
	.string "\n Enter source string :"
	msg_concatenated_string_is:
	.string "\n concatenated string is :\t"


.equ DEST, 255
.equ SORC,255
.section .text
.globl main	
.type main,@function
	main:

		pushl 	%ebp
		movl 	%esp,%ebp
		andl	$-16,%esp
		subl	$528,%esp

		movl	$msg_enter_destination_string,(%esp)
		call	printf
		leal	-255(%ebp),%ebx
		movl    %ebx,(%esp)
        call 	gets 

        movl	$msg_enter_Source_string,(%esp)
        call	printf
        leal	-510(%ebp),%ebx
        movl	%ebx,(%esp)
        call	gets

        leal	-255(%ebp),%ebx
        leal	-510(%ebp),%eax
        movl	%ebx,(%esp)
        movl	%eax,4(%esp)
        call	mystrcat


        movl	$msg_concatenated_string_is,(%esp)
        call	printf
        leal	-255(%ebp),%ebx
        movl	%ebx,(%esp)
        call	puts


		movl	$0,(%esp)
		call	exit


.globl mystrcat
.type mystrcat,@function
	mystrcat:

		pushl	%ebp
		movl	%esp,%ebp

		subl 	$16,(%esp)

		
		movl	8(%ebp),%esi
		movl	$0,%edx
	
	label_loop:
		
		xorl 	%eax,%eax
		lodsb
		cmpl 	$0,%eax
		je 		label_out
		addl	$1,%edx
		loop 	label_loop	

	label_out:

		subl $1,%edx
		movl 8(%ebp),%edi
		
		movl    12(%ebp),%esi
		addl	%edx,%edi

	label_loop1 :
		xorl	%eax,%eax	
		lodsb
		cmpl 	$0,%eax
		je 		label_out1
		addl	$1,%edx
		loop 	label_loop1	

	label_out1:
		
		movl	%ebp,%esp
		popl 	%ebp
		ret




		






