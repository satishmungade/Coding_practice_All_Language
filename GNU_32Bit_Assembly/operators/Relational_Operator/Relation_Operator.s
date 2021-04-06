.section .rodata
	msg_main_print1:
	.string "\n Enter Three Number :"

	msg_main_scan:
	.string "%d%d%d"

	msg_main_print2:
	.string "\n Ans is %d"


.section .text
.globl main 
.type main,@function
	main:

		pushl %ebp					#bp lag
		movl %esp,%ebp

		subl $16,%esp				#4local variable chi jaga keli

		pushl $msg_main_print1		#printf
		call printf
		addl $4,%esp				

		leal -4(%ebp),%eax			#iNo1 ch Address ghetl %eax mathe
		leal -8(%ebp),%edx			#iNo2 ch Address ghetl %edx mathe
		leal -12(%ebp),%ecx			#iNo3 ch Address ghetl %ecx mathe

		pushl %ecx					#&iNo3
		pushl %edx					#&iNo2
		pushl %eax					#&iNo1
		pushl $msg_main_scan		#scanf("%d%d%d",&iNo1,&iNo2,&iNo3)
		call scanf			
		addl $16,%esp				#pushing mul %esp kali gel mul tevth var anun thevl.

		movl -4(%ebp),%eax			#iNo1
		movl -8(%ebp),%edx			#iNo2
		cmpl %edx , %eax			#cmpl RIght to left arrgument dewaw laghel to cmpl ha 12 
									#output same karto singed unsiged Also Boolean result stored.
		
		jl label_Less_Result_True	# jl(less than) iNo2 is Big than so that lebel
		movl $0,%eax				#not big than Assign zero
		jmp label_Not_Equal         #jmp(Always jump)that Label

label_Less_Result_True:
	
	movl $1,%eax					#add 1 bcoz condition true

label_Not_Equal:	
	
	movl -12(%ebp),%edx				#first Two variable result use to check iNo3(%edx) != First Reslut(%edx)
	cmpl %edx ,%eax			
	jne label_Not_Equal_Result_True 	#jne (Jump if cmp is not equal)
	movl $0,-16(%ebp)				#both Equal than Add 0(iAns)			
	jmp label_Result_Print			#jmp(Always jump)that Label

label_Not_Equal_Result_True :
	
	movl $1,-16(%ebp)				#condition iNo3 & First Not same Add one

label_Result_Print :
	
	movl -16(%ebp),%eax			#iAns value take it 
	pushl %eax			
	pushl $msg_main_print2		#printf();
	call printf
	addl $8,%esp

	pushl $0
	call exit
