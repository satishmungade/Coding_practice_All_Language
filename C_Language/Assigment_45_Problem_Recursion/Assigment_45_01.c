/*Draw stack layout of each program separately.
1. Write a recursive program which display below pattern.
Input : 5
Output : * * * * * 
*/
#include<stdio.h>
void Display(int iNo);
int main()
{
	int iNo=0;
	printf("\n Enter a Number :");
	scanf("%d",&iNo);
	Display(iNo);
	printf("\n End of Main");
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
		printf("*\t");
		Display(iNo -1);
	}
}