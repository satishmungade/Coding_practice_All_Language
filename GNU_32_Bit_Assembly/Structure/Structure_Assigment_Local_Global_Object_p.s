.section .rodata
	msg_main_print_char:
	.string "\nEnter a char :"
	msg_main_scan_char:
	.string " %c"

	msg_main_print_iNo:
	.string "\nEnter a iNo :"
	msg_main_scan_iNo:
	.string " %d"

	msg_main_print_shiNo:
	.string "\nEnter a shiNo :"
	msg_main_scan_shiNo:
	.string " %hd"


	msg_main_print_obj2:
	.string "\n Object Two Value is :chChar = %c, iNo = %d, shiNo = %hd\n"	

	msg_main_print_obj1:
	.string "\n Object one Value  is :chChar = %c, iNo = %d, shiNo = %hd\n"	


	msg_main_print_obj3:
	.string "\n Object Three Value is :chChar = %c, iNo = %d, shiNo = %hd\n"	

.section .bss
	.comm obj1,12,4

.section .text
.globl main	
.type main ,@function
	main:

		pushl	%ebp
		movl	%esp,%ebp

		subl	$24,%esp

		pushl	$msg_main_print_char
		call 	printf
		addl 	$4,%esp

		leal 	-12(%ebp),%ebx

		pushl 	%ebx
		pushl	$msg_main_scan_char
		call 	scanf
		addl	$8,%esp

		pushl 	$msg_main_print_iNo
		call 	printf
		addl 	$4,%esp

		leal  	-8(%ebp),%ebx
		pushl	%ebx
		pushl	$msg_main_scan_iNo
		call	scanf
		addl	$8,%esp

		pushl 	$msg_main_print_shiNo
		call 	printf
		addl 	$4,%esp

		leal  	-4(%ebp),%ebx
		pushl	%ebx
		pushl	$msg_main_scan_shiNo
		call	scanf
		addl	$8,%esp

#obj2 Printing

		movl -12(%ebp),%eax
		movl -8(%ebp),%edx
		movl -4(%ebp),%ebx

		pushl   %ebx
		pushl	%edx
		pushl 	%eax
		pushl 	$msg_main_print_obj2
		call 	printf
		addl 	$16,%esp


# obj2 Value Assign Obj1 
		

		movl    -12(%ebp),%eax
		movl    $obj1,%ebx
		movl	%eax,(%ebx)

		
		movl	-8(%ebp),%eax
		movl	%eax,8(%ebx)
		
		movl    -4(%ebp),%eax
		movl   %eax,4(%ebx)
		
#print printing Obj1

		movl 	$obj1,%ebx
		movl 	(%ebx),%ecx
		movl	8(%ebx),%eax
		movl	4(%ebx),%edx

		pushl	%edx
		pushl	%eax
		pushl	%ecx
		pushl	$msg_main_print_obj1
		call	printf
		addl	$16,%esp

# obj2 Value Assign Obj3 

		movl    -12(%ebp),%eax
		movl	%eax,-24(%ebp)

		movl	-8(%ebp),%eax
		movl	%eax,-20(%ebp)
		
		movl    -4(%ebp),%eax
		movl   %eax,-16(%ebp)
		
		
#printing Obj3

		movl -24(%ebp),%eax
		movl -20(%ebp),%edx
		movl -16(%ebp),%ebx

		pushl   %ebx
		pushl	%edx
		pushl 	%eax
		pushl 	$msg_main_print_obj3
		call 	printf
		addl 	$16,%esp

		pushl	$0
		call	exit


