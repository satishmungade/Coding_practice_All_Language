.section .rodata
	msg_main_input_print:
	.string "\n value of N (< : %d) :"
	msg_main_input_scan:
	.string "%d" 
	
	msg_main_input_Elements_print:
	.string "\n Enter value  %d Index Number  :"
	msg_main_input_Elements_scan:
	.string "%d"

	msg_main_Array1:
	.string "\n Array 1 is "

	msg_main_Element_print:
	.string "\n index is [%d] value is %d"

	msg_main_Array2:
	.string "\n Array Two is "


.equ	MAX, 50
.section .data
	.globl Arr1
	.type  Arr1 ,@object
	.size  Arr1,12
	.align	4
	Arr1:
	.int 10,20,30               

.section .bss
	.comm Arr2,200,4    

.section .text	
.globl main 
.type main,@function
	main:
		pushl	%ebp
		movl	%esp,%ebp

		subl	$8,%esp

		pushl	$MAX
		pushl 	$msg_main_input_print
		call 	printf
		addl	$8,%esp

		leal 	-4(%ebp),%ebx
		pushl	%ebx
		pushl	$msg_main_input_scan
		call	scanf
		addl	$8,%esp

		movl	$0,-8(%ebp)
		jmp 	Label_for_condition_1

Label_for_Statement_1:

	pushl	%eax
	pushl	$msg_main_input_Elements_print
	call 	printf
	addl	$8,%esp

	movl    -8(%ebp),%eax				#N value 
	leal 	Arr2( ,%eax,4),%ebx			#&Arr[iCounter]
	pushl	%ebx						
	pushl	$msg_main_input_Elements_scan
	call	scanf
	addl	$8,%esp

	addl	$1,-8(%ebp)

Label_for_condition_1:

	movl	-8(%ebp),%eax
	movl	-4(%ebp),%edx
	cmpl	%edx,%eax
	jl		Label_for_Statement_1	

	#Array one printing 
	pushl	$msg_main_Array1
	call 	printf
	addl 	$4,%esp

	movl	$0,-8(%ebp)
	jmp		Label_for_condition_2

Label_for_Statement_2:
	movl	Arr1(,%eax,4),%edx
	pushl	%edx
	pushl	%eax
	pushl  	$msg_main_Element_print
	call	printf
	addl	$12,%esp

	addl	$1,-8(%ebp)


Label_for_condition_2:
	movl	-8(%ebp),%eax
	cmpl	$3,%eax
	jl		Label_for_Statement_2


	#printing Array 2
	pushl	$msg_main_Array2
	call 	printf
	addl 	$4,%esp

	movl	$0,-8(%ebp)
	jmp		Label_for_condition_3

Label_for_Statement_3:
	movl Arr2(,%eax,4),%edx

	pushl %edx
	pushl %eax
	pushl $msg_main_Element_print
	call printf
	addl $12,%esp

	addl $1,-8(%ebp)
	

Label_for_condition_3:
	movl	-8(%ebp),%eax
	movl	-4(%ebp),%edx
	cmpl	%edx,%eax
	jl      Label_for_Statement_3

	pushl	$0
	call 	exit
		


