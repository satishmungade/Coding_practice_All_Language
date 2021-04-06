#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int iNo1;
	int iNo2;
	int iNo3;
	int iAns;

	printf("\n Enter Three Number :");
	scanf("%d%d%d",&iNo1,&iNo2,&iNo3);

	iAns=iNo1 < iNo2 != iNo3;
	printf("\n Ans is %d",iAns);

	exit(0);
}