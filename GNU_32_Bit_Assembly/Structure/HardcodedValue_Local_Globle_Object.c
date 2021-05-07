#include<stdlib.h>
#include<stdio.h>
struct Demo
{
	char chChar;
	int iNo;
	short int shiNo;
}obj1={'A',10,30};

int  main(void)
{
	struct Demo obj2={'B',30,40};
	printf("\n Obj1 is \n");
	printf(" chChar = %c \t iNo = %d \t shortNo = %d \n",obj1.chChar,obj1.iNo,obj1.shiNo);
	printf("\n obj2 is \n");
	printf(" chChar = %c \t iNo = %d \t shortNo = %d \n",obj2.chChar,obj2.iNo,obj2.shiNo);
	
	exit(0);
}
