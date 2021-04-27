.section .rodata
	msg_main_print1:
	.string "Enter Three Number "
	msg_main_scan:
	.string "%d%d%d"
	msg_main_print2:
	.string "\n iNo1 is :%d\n iNo2 is :%d\n iNo3 is :%d\n iAns is :%d"


.section .text
.globl main
.type main,@function
	main :

		pushl %ebp						#ebp log
		movl %esp, %ebp

		subl $16,%esp					#local variable la jaga keli %ebp pasun khali kiti variable tevthi jaga
		
		pushl $msg_main_print1			#printf for msg 
		call printf
		addl $4,%esp

		leal -4(%ebp),%eax				#local variable che Address ghetle 
		leal -8(%ebp),%edx
		leal -12(%ebp),%ecx

		pushl %ecx						#scanf la te Local variable che Address Pushl kel
		pushl %edx
		pushl %eax
		pushl $msg_main_scan
		call  scanf
		addl $16,%esp

		movl -4(%ebp),%eax				#iNo value 
		cmpl $0,%eax					#iNo madhe Zero asel && 2nd Operand Solve hot nhi
		je label_main_result_And_zero	#mag to Direct 3rd variable kade jail	
		movl -8(%ebp),%eax				#First Non zero value ali 
		addl $1,-8(%ebp)				#2nd operand check karel and ek plus pn karel
		cmpl $0,%eax					#old value sobat compiare kel
		je label_main_result_And_zero	#2nd operande mathe pn zero al tr direct to Zero gheun 3rd variable kd(iNo1 && iNo2)->Ans gheun ||iNo3
		movl $1,-16(%ebp)				#jar pahila 2ni operand result jar true alse tar 1 || iNo3 ->true yenar mg to Direct iANs mathe true takun nigheun jail
		jmp label_main_result_print    #mg kay print la jail


label_main_result_And_zero:		
		movl -12(%ebp),%eax
		addl $1,-12(%ebp)
		cmpl $0,%eax
		je label_main_result_Or_zero
		movl $1,-16(%ebp)
		jmp label_main_result_print

label_main_result_Or_zero :
		movl $0,-16(%ebp)

label_main_result_print :	
		
		movl -16(%ebp),%eax				#local variable madhun value kadun ghetli Register mathe.
		movl -12(%ebp),%edx
		movl -8(%ebp),%ecx
		movl -4(%ebp),%ebx


		pushl %eax						#Local variable printf la pathavl.
		pushl %edx
		pushl %ecx
		pushl %ebx
		pushl $msg_main_print2
		call printf
		add $20,%esp

		pushl $0
		call exit

#---->&&----># && ch first operaend jar one asel tr 2nd operaend kad jato ->eth frist operand NonZero
#asl tr tyla vathe puh asu shakto one manu check karto 2nd
# && ch jar first operand to zero asel tr 2nd operand check nhi karnar ka tr And both oprand Non Zero lagat

#----->OR------>
#jar or First Operand Non zero Asel tr to 2nd Operand check pn nhi kart Ans Deun nigun takto
#jar First operand Zero Asel Tar to Maghe maghe jaun check karto ky ahe

# operand 1  Operand 1  && 	 ||
#   1			1		1    1
#	1			0       0	 1
#	0			1		0	 1
#	0			0		0	 0