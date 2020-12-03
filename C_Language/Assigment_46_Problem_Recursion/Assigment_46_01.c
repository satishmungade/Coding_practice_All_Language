#include<stdio.h>
void Display(int);
int main()
{
	int iNo;
	printf("\n Enter a Number :");
	scanf("%d",&iNo);
	Display(iNo);
	printf("\nEnd Of Main");
	return 0;
}
void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	if(iNo > 0)
	{
		printf("%d\t*\t",iNo);
		Display(iNo-1);
	}
}