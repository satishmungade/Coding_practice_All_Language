.section .rodata
	msg_main_print:
	.string "Enter Two Number :"
	msg_main_scan:
	.string "%d%d"
	msg_main_Sum:
	.string "\n sum is :%d\n"
	msg_main_Diff:
	.string " Diff is :%d \n"

.section .text
.globl main
.type main,@function
	main:
		pushl %ebp
		movl %esp,%ebp

		subl $16,%esp

		pushl $msg_main_print
		call printf
		addl $4,%esp

		leal -4(%ebp),%ebx
		leal -8(%ebp),%eax
		pushl %eax
		pushl %ebx
		pushl $msg_main_scan
		call scanf
		addl $12,%esp

		movl -4(%ebp),%eax
		movl -8(%ebp),%edx
		leal -12(%ebp),%ebx   #Address gheych
		leal -16(%ebp),%ecx

		pushl %ecx          #direct call Address ch deych
		pushl %ebx
		pushl %edx
		pushl %eax
		call SumDiff
		addl $16,%esp

		movl -12(%ebp),%eax
		
		pushl %eax
		pushl $msg_main_Sum
		call printf
		addl $8,%esp


		movl -16(%ebp),%eax
		
		pushl %eax
		pushl $msg_main_Diff
		call printf
		addl $8,%esp

	pushl $0
	call exit


.globl SumDiff
.type fun,@function
	SumDiff:


		pushl %ebp
		movl %esp,%ebp

		movl 8(%ebp),%eax
		movl 12(%ebp),%edx
		
		movl 16(%ebp),%ebx                 #mg function to ch Adreess gheych
		addl %edx,%eax
		movl %eax,(%ebx)                    #tya Address la Direct value move karcch
		
		movl 8(%ebp),%eax
		#movl 12(%ebp),%edx
		
		movl 20(%ebp),%ebx
		subl %edx,%eax
		movl %eax,(%ebx)

		movl %ebp,%esp
		popl %ebp
		ret 
