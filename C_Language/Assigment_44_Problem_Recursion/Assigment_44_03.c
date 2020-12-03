/*1. Write a recursive program which display below pattern.
Output : 5 4 3 2 1
*/

#include<stdio.h>
void Display()
{
	static int iNo=5;
	while(iNo > 0)
	{
		printf("\t%d",iNo);
		iNo --;
		Display();
	}	
}
int main()
{
	Display();
	printf("\nEnd of Main");
	return 0;
}