/*1. Write a recursive program which display below pattern.
Output : * * * * *  
*/

#include<stdio.h>
void Display()
{
	static int iNo=5;               //without static Not possiable. we 
									//	can possiable we wirte display(ino-1)
	if(iNo > 0)
	{
		printf("\t*");
		iNo --;
		Display(iNo);

	}	
}
int main()
{
	Display();
	printf("\nEnd OF Main");
	return 0;
}