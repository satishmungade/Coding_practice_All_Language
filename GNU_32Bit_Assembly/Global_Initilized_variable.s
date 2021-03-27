 #intilize global variable int g_iNo=20;
.section .rodata
	msg_main_print1:
	.string "\n Global iNo is :%d"

.section .data   			#global variable store in Data initilized
	.globl g_iNo			#name g_iNo
	.type g_iNo ,@object	#object tail its variable
	.size g_iNo, 4			#size for variale which you want 
	.align 4				#align for variable my mschin 32bit thats why i give 4(segment)
	g_iNo:					#labal
	.int 20					#hear use Assembly directives start with .(Dot) .int value give 20 

.section .text
.globl main
.type main ,@function
main:
		
		pushl %ebp				#push a ebp in stack frame
		movl %esp , %ebp		#esp value move in ebp

		movl g_iNo,%eax			#if we have name than we can access directly g_iNo value move on eax register
		pushl %eax				#eax register push
		pushl $msg_main_print1
		call printf				#call printf
		addl $8,%esp			#back for 8(g_iNo + .String)

		pushl $0
		call exit
