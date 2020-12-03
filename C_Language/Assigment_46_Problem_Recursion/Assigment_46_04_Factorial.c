#include<stdio.h>
int Fact(int);
int main()
{
	int iNo=0,iAns=0;
	printf("\nEnter a Number :");
	scanf("%d",&iNo);
	iAns=Fact(iNo);
	 printf("Factorial is Given Number :%d",iAns);
	return 0;
}
int Fact(int iNo)
{
	if(iNo ==1)
		return 1;
	else
		return iNo *Fact(iNo-1);

}
