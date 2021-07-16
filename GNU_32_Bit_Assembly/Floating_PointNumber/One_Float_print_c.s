.section .rodata
	msg_print_float1:
	.string " fNo1 is = %f\n fNo2 is = %f\n"

	msg_print_double2:
	.string	" dNo1 is = %lf \n dNo2 is = %lf \n"

.section .data	
	.globl  fNo1
	.type	fNo1,@object
	.size	fNo1,4
	.align	4
	fNo1:
	.float 57.33


.section .data	
	.globl  dNo1
	.type	fNo1,@object
	.size	fNo1,4
	.align	4
	dNo1:
	.double 245788994.3354			
	

.section	.bss
	.comm	fNo2 ,4,4


.section	.bss
	.comm	dNo2 ,4,4	


.section .text
.globl main
.type main,@function
	main:

	pushl	%ebp
	movl 	%esp,%ebp
	andl	$-16,%esp
	subl	$32,%esp

	#first attemept (Not working No fpu)

	#movl	fNo2				#movl not work on floating number 
	#movl	fNo1
	#movl	$msg_print_float1,(%esp)
	#movl	4(%esp)
	#movl 	8(%esp)
	#call	printf



	#secound attemept     floating number instruction yala pn 
	#sufix ahe s  ->short(float) 
	#sufic ahe l ->long(bouble)
	#  %fld   -> load %st(0) 	instruction #push hot
	#  %fst   ->store %st(0)    instruction  #pop nhi hot
	#  %fstp   ->pop 			instruction pop for value sadhi use 
	#  %fild	-> integer  value load.		
	#  %fist    -> integer   value store.

	#	flds	fNo2     #not working  (as printer as requierd 8bit) 
	#	flds	fNo1
	#	movl	$msg_print_float1,(%esp)
	#	fstps	4(%esp)
	#	fstps	8(%esp)
	#	call	printf


	#third attemept (working )
	flds	fNo2
	flds	fNo1
	movl	$msg_print_float1,(%esp)
	fstpl	4(%esp)
	fstpl	12(%esp)
	call	printf

	#double (working 1)			#ha apalay 8ch pahije manun
	#fldl	dNo2
	#fldl	dNo1
	#movl	$msg_print_double2,(%esp)
	#fstpl	4(%esp)
	#fstpl	12(%esp)
	#call	printf

	#double (working 2)

	#movl	dNo1,%eax   	 		
	#movl	dNo1+4,%edx

	#movl	dNo2,%ecx
	#movl	dNo2+4,%ebx

	#addl	%eax,%ecx
	#addl  	%edx,%ebx		

	#movl	$msg_print_double2,(%esp)
	#movl	%ecx,4(%esp)
	#movl	%ebx,12(%esp)
	#call	printf

	#fNo2=fNo1
	
	
	#dNo2=dNo2



	movl	$0,(%esp)
	call	exit
