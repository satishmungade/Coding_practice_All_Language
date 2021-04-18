#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int iNo1;
	int iNo2;
	printf("\n Enter First  Numbers :");
	scanf("%d",&iNo1);
	printf("\n Enter Secound  Numbers :");
	scanf("%d",&iNo2);
	printf("\n 1st Operand is :%d\t2nd Operand is  :%d\t 1st &(AND) 2nd Operation is =%d\n",iNo1,iNo2,iNo1 & iNo2);
	printf("\n 1st Operand is :%d\t2nd Operand is  :%d\t 1st |(OR) 2nd Operation is =%d\n",iNo1,iNo2,iNo1 | iNo2);
	printf("\n 1st Operand is :%d\t2nd Operand is  :%d\t 1st ^(XOR) 2nd Operation is =%d\n",iNo1,iNo2,iNo1 ^ iNo2);
	printf("\n 1st Operand is :%d\t2nd Operand is  :2\t 1st <<(LS) 2nd Operation is =%d\n",iNo1,iNo1 << 2);
	printf("\n 1st Operand is :%d\t2nd Operand is  :2\t 1st >>(RS) 2nd Operation is =%d\n",iNo1,iNo1 >> 2);
	printf("\n 1st Operand is :%d\t Only One Operand ~(NOT) Operation is =%d\n",iNo2,~iNo2);
	

	exit(0);
}