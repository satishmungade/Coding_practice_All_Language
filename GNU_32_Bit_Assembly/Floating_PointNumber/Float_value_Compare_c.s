.section .rodata
	msg_input_print:
	.string "Enter two floating point value:"
	msg_input_scan:
	.string "%f%f"

	msg_less_than:
	.string "\n fNo1 is Lens than fNo2"

	msg_grater_than:
	.string "\n fNo1 is grater than fNo2"

	msg_equal_than:
	.string "\n value is equal"

.section .text
.globl main
.type main,@function
	
	main:
		pushl 	%ebp
		movl 	%esp ,%ebp

		andl 	$-16,%esp

		subl 	$16,%esp

		movl	$msg_input_print,(%esp)
		call	printf

		leal 	-4(%ebp),%eax
		leal	-8(%ebp),%edx
		movl	$msg_input_scan,(%esp)
		movl	%eax,4(%esp)
		movl	%edx,8(%esp)
		call	scanf


		movl 	-4(%ebp),%eax
		movl	-8(%ebp),%edx
		movl	%eax,(%esp)
		movl	%edx,4(%esp)
		call    compare

		cmpl	$-1,%eax
		je		label_main_less
		cmpl	$1,%eax
		je 		label_main_grater
		
		movl	$msg_equal_than,(%esp)
		call	printf
		jmp		label_exit
	
	label_main_less:	
		movl	$msg_less_than,(%esp)
		call	printf
		jmp 	label_exit

	label_main_grater:	
		movl	$msg_grater_than,(%esp)
		call	printf

		
	label_exit:
		movl	$0,(%esp)
		call     exit



.globl compare
.type compare,@function
	compare :
		
		pushl	%ebp
		movl	%esp,%ebp

		subl 	$16,%esp
		finit
		
		flds   8(%ebp)
		flds   12(%ebp)

		fcompp 				#compare st(0),st(1) store status fpu status  register
		fstsw                #retrive statas register form fpu to 
		sahf				#load e flag ah

		jb 		label_less
		ja 		label_grater
		
		addl 	$0,%eax
		jmp 	ep_log

	label_less:
		addl	$-1,%eax
		jmp 	ep_log

	label_grater:
		addl	$1,%eax


	ep_log:
		movl	%ebp,%esp
		popl	%ebp
		ret
