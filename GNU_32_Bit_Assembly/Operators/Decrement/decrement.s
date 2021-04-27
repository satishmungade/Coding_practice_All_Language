.section .rodata
		
		msg_main_print1:
		.string "\n iNo1 is = %d\n iNo2 is = %d\n iAns1 is = %d\n  iAns2 is = %d" 

.section .text
.globl main 
.type main , @function
	main:
		pushl %ebp
		movl %esp,%ebp

		subl $16,%esp

		movl $10,-4(%ebp)
		movl $20,-8(%ebp)

		movl -4(%ebp),%eax   	#iNo1
		movl %eax,-12(%ebp)	 	#iNo1  chi value assign keli iAns1
		subl $1,%eax			#post decrement ahe pahile dili mg decrment keli 
		movl %eax,-4(%ebp)	 	#mg update value sotala Assign pn kel

		movl -8(%ebp),%eax		#iNo2 
		subl $1,%eax			#iNo2 -1 kel predecrement ahe mnun	
		movl %eax,-8(%ebp)		#decrement value sotal ch assign pn karun ghetli	
		movl %eax,-16(%ebp) 	#mg iAns la update value pn dil %eax mathe iAns pn value ahe

		movl -4(%ebp),%edx		#iNo1
		movl -8(%ebp),%ecx		#iNo2
		movl -12(%ebp),%ebx 	#iNo3

		pushl %eax				#iAns2
		pushl %ebx				#iAns1 
		pushl %ecx				#iNo2
		pushl %edx				#iNo1
		pushl $msg_main_print1
		call printf				#printf
		addl $20,%esp			#16 var ghetl

		pushl $0
		call exit


