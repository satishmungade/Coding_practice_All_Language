.section .rodata
	msg_main_print1:
	.string "\n Enter Three Number :"
	msg_main_scan:
	.string "%d%d%d"
	msg_main_print2:
	.string "\niNo1 is :%d\niNo2 is :%d\niNo3 is :%d\niAns is :%d"

.section .text
.globl main	
.type main ,@function
	main:
		pushl %ebp					#bp log
		movl %esp , %ebp

		subl $16,%esp				#local variable 4

		pushl $msg_main_print1		#printf
		call printf
		addl $4,%esp				

		leal -4(%ebp),%eax			#leal local variable Address fatch 
		leal -8(%ebp),%edx
		leal -12(%ebp),%ecx

		pushl %ecx
		pushl %edx					#scanf("%d%d%d",&iNo,&iNo2,&iNo3)
		pushl %eax
		pushl $msg_main_scan
		call scanf
		addl $16,%esp				#khali ghel so var anl

		movl -4(%ebp),%eax			#movl give the value that location
		
		cmpl $0,%eax				#compiare first local variable Zoro or not
		je label_main_result_zero	#if Zero than Goto that Label
		movl -8(%ebp),%eax			#if Not Zero Than go to Next Local variable take that value first
		addl $1,-8(%ebp)			#and add 1 that value
		cmpl $0,%eax				#compire old value
		je label_main_result_zero	#if old value is Zero than go that label
		movl -12(%ebp),%eax			#first 2value Non Zero value hear come we 3rd local variable value take it
		addl $1,-12(%ebp)			#add one that value
		cmpl $0,%eax				#compaire that old value 
		je label_main_result_zero	#if zero that n  go that label
		movl $1,-16(%ebp)  			#Final All Non Zero value than Add 4th local variable 1 
		jmp label_main_ans_print    #jmp that label


label_main_result_zero:				#if Zero value than this label add final ans zero
	movl $0,%eax		

label_main_ans_print:				#All local variable  
	movl %eax ,-16(%ebp)			#1 variable zero label ghel asel tr ya mathe Zero yanr so 
	movl -12(%ebp),%edx				#iNo3
	movl -8(%ebp),%ecx				#iNo2
	movl -4(%ebp),%ebx				#iNo1

	pushl %eax
	pushl %edx					#printf send all variable for printing purpose.
	pushl %ecx
	pushl %ebx
	pushl $msg_main_print2		#printf("%d%d%d%d",iNo1,iNo2,iNo3,iAns);
	call printf
	addl $20,%esp				#old Local addeded

	pushl $0					#exit(0)
	call exit









