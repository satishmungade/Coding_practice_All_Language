.section .rodata
	msg_main_print:
	.string "\n Enter Two Number :"
	msg_main_scan:
	.string "%d%d"
	msg_main_Ans:
	.string "Division OutPut is \n  Quationt is :%d \n Reminder :%d\n "

.section .text
.globl main
.type main, @function
	main:

	pushl %ebp
	movl %esp,%ebp

	subl $12,%esp

	pushl $msg_main_print
	call printf
	addl $4,%esp

	leal -4(%ebp),%eax
	leal -8(%ebp),%edx
	
	pushl %edx
	pushl %eax
	pushl $msg_main_scan
	call scanf
	addl $12,%esp

	xorl %edx,%edx				#divl ha Reminder ha %edx madhe takto Mnun pahila tyla Zero Out karun Gheych
	movl -4(%ebp),%eax			#iNo1 ,
	movl -8(%ebp),%ecx			#iNo2

	divl %ecx					#divl la jani bhagych to ch parameter deych

	movl %eax,-12(%ebp)			#ani to Quation ha %eax madhe takto 
	pushl %edx					#reminder la %edx madhe
	pushl %eax
	pushl $msg_main_Ans
	call printf
	addl $12,%esp

	pushl $0
	call exit


