#include<stdio.h>
double SquareMeter(int);
int main()
{
	int iValue=0;
	double dRet=0.0;

	printf("Enter a Area in Square Feet :");
	scanf("%d",&iValue);

	dRet=SquareMeter(iValue);
	printf("Area : %lf",dRet);

	return 0;
}
double SquareMeter(int iValue)
{
	double dSquareFeet=0.0;
	dSquareFeet = iValue * 0.0929;
	return dSquareFeet;
}