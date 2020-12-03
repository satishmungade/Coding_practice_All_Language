/*1. Write a recursive program which display below pattern.
Output : a b c d e
*/

#include<stdio.h>
void Display()
{
	static int iNo=97;
	while(iNo <= 102)
	{
		printf("\t%c",iNo);
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