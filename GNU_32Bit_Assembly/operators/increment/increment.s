.section .rodata
	msg_main_print:
	.string "\n iNo1 is = %d\n iNo2 is = %d\n iAns1 is = %d\n  iAns2 is = %d" 

.section .text
.globl main 
.type main ,@function
	main:
		pushl %ebp
		movl %esp , %ebp
		subl $16 , %esp
		
		movl $10,-4(%ebp)  		#iNo1=10
		movl $20,-8(%ebp)		#iNo2=20

		movl -4(%ebp),%eax		#value ghetli iNo madhali
		addl $1,%eax			#1 ni value increment kel
		movl %eax,-4(%ebp)		#increment value iNo1 Assiged kel
		movl %eax,-12(%ebp)		#tich value iAns pn Move keli

		movl -8(%ebp),%eax		#iNo2 chi value ghetli
		movl %eax,-16(%ebp)		#tich value iAns 2 la takli
		addl $1,%eax			#mg iNo2 Post Increment kel
		movl %eax,-8(%ebp)		#incremented value he self Assiged pn kel eax mathe iNo2 ahe


		movl -4(%ebp),%edx		#iNo1
		movl -12(%ebp),%ecx		#iAns1
		movl -16(%ebp),%ebx		#iAns2

		pushl %ebx				#iAns2
		pushl %ecx				#iAns1
		pushl %eax				#iNo2
		pushl %edx				#iNo1
		pushl $msg_main_print
		call printf
		addl $20, %ebp

		pushl $0
		call exit

