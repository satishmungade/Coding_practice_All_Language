#all bitwise opertore ans store n 2n operand andl %eax,%edx	 mnjech ans atta %edx madhe store zal

.section .rodata
	msg_main_print1:
	.string "Enter Two Number :"
	msg_main_scan:
	.string "%d%d"
	msg_main_print2:
	.string "\n 1st Operand is :%d\t2nd Operand is  :%d\t 1st &(AND) 2nd Operation is =%d\n"
	msg_main_printf3:
	.string "\n 1st Operand is :%d\t2nd Operand is  :%d\t 1st |(OR) 2nd Operation is =%d\n"
	msg_main_printf4:
	.string "\n 1st Operand is :%d\t2nd Operand is  :%d\t 1st ^(XOR) 2nd Operation is =%d\n"
	msg_main_printf5:
	.string "\n 1st Operand is :%d\t2nd Operand is  :2\t 1st <<(LS) 2nd Operation is =%d\n"
	msg_main_printf6:
	.string "\n 1st Operand is :%d\t2nd Operand is  :2\t 1st >>(RS) 2nd Operation is =%d\n"
	msg_main_printf7:
	.string "\n 1st Operand is :%d\t Only One Operand ~(NOT) Operation is =%d\n"


.section .text
.globl main	
.type main,@function
	main:
		pushl %ebp					#ebp log
		movl %esp,%ebp

		subl $8,%esp				#local variable location

		pushl $msg_main_print1		#printf
		call printf
		addl $4,%esp

		leal -4(%ebp),%edx		 	#local variable addresss pass in scanf
		leal -8(%ebp),%eax

		pushl %eax
		pushl %edx
		pushl $msg_main_scan		#scanf()
		call scanf
		addl $12,%esp


		movl -4(%ebp),%edx			#iNo1  chi value move kel %edx madhe ka andl deych manun
		movl -8(%ebp),%eax			#iNo2 chi value  move kel %eax madhe
		andl %eax,%edx				#andl dile Andl ch ans 2nd operand madhe store hoto mnjech eth %edx madhe new value ali
		movl -4(%ebp),%ebx			#ajun ekda iNo1 chi value ghetlo ka tr andl ch ans hai edx al na (2n operand)

		
		

		pushl %edx					#Andl ch Ans bcoz its 2n operand for andl
		pushl %eax					#iNo2
		pushl %ebx					#iNo1 new register and pushl for printf
		pushl $msg_main_print2	
		call  printf
		addl $16,%esp


		movl -4(%ebp),%edx			#(same as it working andl)
		movl -8(%ebp),%eax			# %edx register madhali  value change zali location ch nhi
		orl %eax,%edx				
		movl -4(%ebp),%ebx
		
		pushl %edx
		pushl %eax
		pushl %ebx
		pushl $msg_main_printf3
		call printf
		addl $16,%esp


		movl -4(%ebp),%edx			#(same as it working andl)
		movl -8(%ebp),%eax
		xorl %eax,%edx				#%edx register madhali  value change zali location ch nhi
		movl -4(%ebp),%ebx
		
		pushl %edx
		pushl %eax
		pushl %ebx
		pushl $msg_main_printf4
		call printf
		addl $16,%esp


		movl -4(%ebp),%edx		#iNo1 << left shift 2
		sall $2,%edx			#(same as it working andl) %edx new value ali.register value change zali
		movl -4(%ebp),%ebx		#old value ajun ekda ghetli for printing purpose
		
		pushl %edx				#new value manjech sall ni dileli
		pushl %ebx				#old value ji iNo madhe ji hoti
		pushl $msg_main_printf5
		call printf
		addl $12,%esp


		movl -4(%ebp),%edx			#iNo1 >> right shift 2
		sarl $2,%edx				#(same as it working andl) %edx new value ali.ans al only Register madhe
		movl -4(%ebp),%ebx			#old value ajun ekda ghetli for printing purpose
		
		pushl %edx					#new value majnech sarl ni dileli
		pushl %ebx					#old value ji iNo madhe ji hoti
		pushl $msg_main_printf6
		call printf
		addl $12,%esp


		movl -4(%ebp),%edx		#INo1 value ghetli %edx
		notl %edx				# ~iNo1 new value hi %edx ch store zali mg juni valuen nigun gheli
		movl -4(%ebp),%ebx		#manjun ajun ekda juni value ghetli tyach locaton ch
		
		pushl %edx
		pushl %ebx
		pushl $msg_main_printf7
		call printf
		addl $12,%esp


		pushl $0
		call exit
