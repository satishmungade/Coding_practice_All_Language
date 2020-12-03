#include<stdio.h>
void Display(char);
int main()
{
	char chChar='\0';
	printf(" \n Enter a Division for A To D :");
	scanf("%c",&chChar);
	Display(chChar);
	
	return 0;
}
void Display(char chChar)
{
	if((chChar == 65) || (chChar == 97))
	{
		printf("\nYour exam Time is 7 AM ");
	}
	 if((chChar == 66) || ( chChar || 98))
	{
		printf("\nYour exam Time is 8.30 AM ");
	}
	
	if((chChar == 67) || (chChar == 99))
	{
		printf("\nYour exam Time is 9.20 AM ");
	}
	else if((chChar == 68) || (chChar == 100))
	{
		printf("\nYour exam Time is 10.20 AM ");
	}
	else
	{
		printf("No Exam");
	}

}