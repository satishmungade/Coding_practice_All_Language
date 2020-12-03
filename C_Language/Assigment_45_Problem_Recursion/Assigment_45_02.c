/*Draw stack layout of each program separately.
1. Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5
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
		
		Display(iNo -1);
		printf("%d\t",iNo);
	}
}