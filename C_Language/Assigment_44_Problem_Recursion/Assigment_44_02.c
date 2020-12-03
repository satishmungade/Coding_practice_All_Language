/*1. Write a recursive program which display below pattern.
Output : 1 2 3 4 5
*/

#include<stdio.h>
void Display()
{
	static int iNo=1;
	if(iNo <= 5)
	{
		printf("\t%d",iNo);
		iNo ++;
		Display();
	}	
}
int main()
{
	Display();
	printf("\nEnd of Main");
	return 0;
}