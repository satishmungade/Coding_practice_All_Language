#include<stdio.h>

int PowerI(int X,int Y);
int PowerR(int X,int Y);
int main()
{
	int X=0,Y=0,iRet=0;
	printf("\nEnter Two Number :");
	scanf("%d%d",&X,&Y);
	iRet=PowerR(X,Y);
	printf("Power is :%d",iRet);
	return 0;
}

int PowerI(int X,int Y)
{
	 int Result=1;
	while(Y != 0)
	{
		Result= Result * X;
		Y--;	
	}
	return Result;	
}
int PowerR(int X,int Y)
{
	 int Result=1;
	while(Y != 0)
	{
		Result= Result * X;
		Y--;
		PowerR(X,Y);
	}
	return Result;	
}