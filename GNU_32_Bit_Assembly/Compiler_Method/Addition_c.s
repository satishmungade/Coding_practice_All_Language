.section .rodata
	msg_main_input_print:
	.string "Enter Two Number :"
	msg_main_input_scanf:
	.string "%d%d"
	msg_main_output:
	.string "\n Addition is :%d\n "

.section .text
.globl main
.type main,@function
	main:
		pushl 	%ebp
		movl	%esp,%ebp

		andl	$-16,%esp	#segement 16 

		subl	$32,%esp	#local variable 12 + big parameter function call 12 =24 if addition 16plus than use 32 otherwise 16
							#than we dont need pushl and addl operation perfrom
		movl	$msg_main_input_print,(%esp)
		call 	printf

		leal 	-4(%ebp),%ebx
		leal	-8(%ebp),%eax
		movl	$msg_main_input_scanf,(%esp)
		movl	%ebx,4(%esp)
		movl	%eax,8(%esp)
		call 	scanf	

		movl	-4(%ebp),%eax
		movl	-8(%ebp),%edx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call	Addition
		movl	%eax,-12(%ebp)

		
		movl	$msg_main_output,(%esp)
		movl	%eax,4(%esp)
		call 	printf

		movl	$0,(%esp)
		call 	exit

.globl	Addition	 		
.type Addition,@function
	Addition:
		pushl	%ebp
		movl	%esp,%ebp

		movl	8(%ebp),%eax
		movl	12(%ebp),%edx
		addl 	%edx,%eax
		
		movl 	%ebp,%esp
		popl 	%ebp
		ret 
