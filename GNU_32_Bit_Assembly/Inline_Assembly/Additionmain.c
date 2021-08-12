#include<stdio.h>
#include<stdlib.h>
int Addition(int,int);

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	printf("\n Enter Two Number for Arithmatic Operation : ");
	scanf("%d%d",&iNo1,&iNo2);
	iAns=Addition(iNo1,iNo2);
	printf("\n iAns is :%d",iAns);
	
	exit(0);
}
