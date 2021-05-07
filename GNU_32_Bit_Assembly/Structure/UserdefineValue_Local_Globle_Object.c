#include<stdlib.h>
#include<stdio.h>
struct Demo
{
	char chChar;
	int iNo;
	short int shiNo;
}obj1;

int  main(void)
{
	struct Demo obj2;
	char t;
	printf("Enter obj1 values \n");
	printf("\n Enter chChar : ");
	scanf("%c",&obj1.chChar);
	printf("\n Enter a iNo :");
	scanf("%d",&obj1.iNo);
	printf("\n Enter a shiNo :");
	scanf("%hd",&obj1.shiNo);

	printf("Enter obj2 values \n");
	printf("\n Enter chChar : ");
	scanf("%c%c",&t,&obj2.chChar);
	printf("\n Enter a iNo :");
	scanf("%c%d",&t,&obj2.iNo);
	printf("\n Enter a shiNo :");
	scanf("%c%hd",&t,&obj2.shiNo);

	printf(" chChar = %c \t iNo = %d \t shortNo = %d \n",obj1.chChar,obj1.iNo,obj1.shiNo);
	printf("\n obj2 is \n");
	printf(" chChar = %c \t iNo = %d \t shortNo = %d \n",obj2.chChar,obj2.iNo,obj2.shiNo);
	
	exit(0);
}
