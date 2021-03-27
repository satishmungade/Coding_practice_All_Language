#local variable taking for user
.section .rodata
	msg_main_print1:
	.string "\n Enter a Number :"
	
	msg_main_scan:
	.string "%d"

	msg_main_print2:
	.string "\n Number is :\t%d"

.section .text
.globl main
.type main , @function
	main:
		pushl %ebp;             #first bp la stack fram mathe takl.
		movl %esp,%ebp			#move mahnje sp madhali value bp madhe takli.

		subl $4 , %esp			#eka local variable chi soy keli.

		pushl $msg_main_print1	#printf ch para meter push kel.
		call printf				#printf la call kel
		addl $4,%esp			#call mul sp khali ghela hota mnun parat jage vr anla(jevth push kel tevth var kadal)

		leal -4(%ebp),%ebx		# Bp pasun 4 la variable ahe tyach addres %ebx register mathe store kel.
		pushl %ebx				# ebx la pn push kel 
		pushl $msg_main_scan	#scanf cha para meter push kel
		call scanf				#mg scanf call
		addl $8,%esp			#jevth push kelo tevth n var pn gheyach

		movl -4(%ebp),%eax		#ebp register mathali value he eax mathe move keli
		pushl %eax				#mg printf chya parameter mnun push kel
		pushl $msg_main_print2	#mg first parameter string pn push kel(right to letf)
		call printf				#mg call print la
		addl $8, %esp			#jevth push kel hot tevth var pn ghetal(4(string + value))

		pushl $0				
		call exit				#exit




#################################
#	c code is
#
#	#include<stdio.h>
#	#include<stdlib.h>	
#	int main(void)
#	{
#		int iNo;
#		printf("Enter number ");
#		scanf("%d",&iNo);
#		printf("iNo is %d",iNo);	
#		
#	}
#
#
#################################