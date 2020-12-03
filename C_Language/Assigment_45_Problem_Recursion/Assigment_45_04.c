/*Draw stack layout of each program separately.
1. Write a recursive program which display below pattern.
Input : 5
Output : A B C D F
*/

#include<stdio.h>
void Display(int iNo);
int main()
{
	static int iNo=0;
	printf("\n Enter a Number :");
	scanf("%d",&iNo);
	Display(iNo);
	printf("\n End of Main");
	return 0;
}
void Display(int iNo)
{
	static int i=1;
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	if(iNo != 0 )
	{
			static int i=65;
			printf("%c\t",i);
			i++;
			Display(iNo - 1);	
	}
} 