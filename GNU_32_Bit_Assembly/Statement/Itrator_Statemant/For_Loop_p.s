.section .rodata
	
	msg_main_print:
	.string "\n Enter the Number :"

	msg_main_scan:
	.string "%d"

	msg_main_print_result:
	.string "%d\n"

.section .text
.globl main
.type main,@function
main:
	
	pushl %ebp
	movl %esp,%ebp

	subl $8,%esp

	pushl $msg_main_print
	call printf
	addl $4,%esp

  	leal -4(%ebp),%ebx
	pushl %ebx
	pushl $msg_main_scan
	call scanf
	addl $8,%esp

	movl $0,-8(%ebp)				#Assigment i=0
	jmp ForLoop_check_Condition

For_Loop_Body:
	
	pushl %eax
	pushl $msg_main_print_result
	call printf   					#statement printf("%d\n",iCounter)
	addl $8,%esp

	addl $1,-8(%ebp)				#manipulation   iCounter ++

ForLoop_check_Condition:

	movl -8(%ebp),%eax
	movl -4(%ebp),%edx
	cmpl %edx,%eax				#conditon     
	jl   For_Loop_Body

	pushl $0
	call exit
