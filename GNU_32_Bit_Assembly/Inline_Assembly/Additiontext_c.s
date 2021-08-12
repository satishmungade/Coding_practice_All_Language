.section .text 
.globl Addition 
.type Addition, @function 
	Addition:
		pushl %ebp
		movl %esp ,%ebp
		subl $4,%esp

		movl 8(%ebp),%eax
		movl 12(%ebp),%edx

		addl %edx,%eax
		movl %eax,-4(%ebp)

		movl %ebp,%esp
		popl %ebp
		ret 
