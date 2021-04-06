#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int iNo1=10;
	int iNo2=20;
	int iAns1;
	int iAns2;
	iAns1 = iNo1 --;
	iAns2 = --iNo2;
	printf("\n iNo1 is = %d\n iAns1 is =  %d\n",iNo1,iAns1);
	printf("\n iNo2 is = %d\n iAns2 is =  %d\n",iNo2,iAns2);

	exit(0);
}