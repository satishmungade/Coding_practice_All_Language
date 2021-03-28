#addition of Two Number #Next part is comenet single line
.section .rodata
        msg_main_print1:                #first printf rodata
        .string "Enter Two Number for Addition :"

        msg_main_scan:                  #scanf rodata
        .string "%d%d"

        msg_main_print2:                #second printf rodata
        .string "\n Addition is :%d"

.section .text                          #text section all function code write hear

.globl main                             #globl bcoz Assemeby every thing conside as internal Linakge that way write globl
.type main, @function                   #we tail Hear main is Function

main:
        pushl %ebp                      #firstly push bp in stackfram
        movl %esp,%ebp                  # sp madhali value bp mathe takli

        subl $12 , %esp                 # 3 local variable chi soy keli

        pushl $msg_main_print1          #printf function ch parameter push kela
        call printf                     #printf function call kel
        addl $4, %esp                   # call mule sp kali ala hota tyla jith hota tith nuhun theval

        leal -8(%ebp), %eax             #bp pasun khali 8 la 2nd variable ahe tyacha address %eax register mathe ghetla 
        leal -4(%ebp), %edx             #bp pasun khali 4la 1st vatiable ahe tyach address %edx register mathe ghetla
        
                        # pushing order right to left aslymule scanf la below sequance ne parameter push hotil :
                        # 1. iNo2 cha address %eax madhe ahe to push hoil.
                        # 2. iNo1 cha address %edx madhe ahe to 2nd time la push hoil.
                        # 3. rodata last la push hoil.



        pushl %eax 
        pushl %edx
        pushl $msg_main_scan
        call scanf
        addl $12 , %esp

        movl -4(%ebp) , %eax            #iNo1 madhali value %eax register madhe ghetali 
        movl -8(%ebp) , %edx            #iNo2 madhali value %edx register madhe ghetli

                        # pushing order right to left aslymule addition function la below sequance ne parameter push hotil :
                        # 1. iNo2 chi value %edx madhe ahe to push hoil.
                        # 2. iNo1 chi value  %eax madhe ahe to 2nd time la push hoil.


        pushl %edx
        pushl %eax
        call addition
        movl %eax , -12(%ebp)           #return aleli value %eax madhe ali hoti tila iAns madhe takli.
        addl $8, %esp

        movl -12(%ebp), %eax            #iAns madhali value kadun ghetali %eax madhe

        pushl %eax
        pushl $msg_main_print2          #call 2n printf
        call printf
        addl $8, %esp

        pushl $0   
        call exit                       #caller koni nhi mnun direct exit la call


.globl addition
.type addition, @function
addition :
        pushl %ebp
        movl %esp , %ebp
        
        subl $4, %esp

        movl 8(%ebp), %eax              #bp pasun vari 8la iNo1 ahe tyatali value %eax madhe ghetli.
        movl 12(%ebp), %edx             # bp pasun vari 12 la iNo2 ahe tyatali value %edx madhe ghetali.

        addl %edx, %eax                 # %eax=%edx + %eax
        movl %eax, -4(%ebp)             #iAns mathe value takli addition function madhelya 

        movl %ebp , %esp                # stackframe pop keli manhje bp madhali value sp mathali takli.
        popl %ebp                        #bp la tyachya junya jagevar nehun theval.
        ret                             #function madhun return kel.
