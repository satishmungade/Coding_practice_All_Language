/*1. Write a recursive program which display below pattern.
Output : A B C D E
*/

#include<stdio.h>
void Display()
{
	static int iNo=65;
	while(iNo <= 70)
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