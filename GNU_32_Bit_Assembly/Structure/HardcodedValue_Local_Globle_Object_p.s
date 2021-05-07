.section .rodata
	msg_main_print1:
	.string "\n Obj1 is \n"
	msg_main_print2:
	.string "chChar = %c \t iNo = %d \t shiNo = %d \n"
	msg_main_print3:
	.string "\n Obj2 \n"
	msg_main_print4:
	.string " chChar = %c \t iNo = %d \t shiNo = %d \n"

.section .data	
	.globl Obj1				#global object 
	.type Obj1,@object
	.size Obj1,12
	.align 4				#word align ment 32bit 4
	Obj1:
		.ascii "A"			#char ch ='A'
		.zero 3				#pading 
		.int 10				#int iNo=10
		.value 20			#short shiNo=20

.section .text
.globl main
.type main,@function		
	main:
		pushl %esp
		movl %esp,%ebp

		subl $12,%esp			#loval object size 

		movb $'B',-12(%ebp)		#Higher to lover first element always Last char ch='b'	
		movl $30,-8(%ebp)		#int iNo=50
		movw $40,-4(%ebp)		#short shino =60 

		pushl $msg_main_print1
		call printf
		addl $4,%esp

		movl $Obj1,%ebx     	#global object address take
		xorl %eax,%eax			#zero out
		movb (%ebx),%al     	#first Element start with zero location that take it
		movl 4(%ebx),%edx		#4 la 2nd element ahe
		xorl %ecx,%ecx		
		movw 8(%ebx),%cx		#8 la 3rd element ahe

		pushl %ecx
		pushl %edx
		pushl %eax
		pushl $msg_main_print2
		call printf
		addl $16,%esp


		pushl $msg_main_print3
		call printf
		addl $4,%esp

		xorl %eax,%eax			#xorl ka apan ek char use kart ahot pn puthch 3byte madhe ky asel mahiti nhi zero karun ghetl
		movb -12(%ebp),%al   	#2nd object 
		movl -8(%ebp),%edx
		xorl %ecx,%ecx
		movw -4(%ebp),%cx

		
		pushl %ecx
		pushl %edx
		pushl %eax
		pushl $msg_main_print4
		call printf
		addl $16,%esp		

		pushl $0
		call exit
