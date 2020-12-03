#include<stdio.h>
void Display(char );

int main()
{
	char chChar='\0';
	printf("Enter a Character :");
	scanf("%c",&chChar);
	Display(chChar);


	return 0;
}
void Display(char ch)
{
	int iCnt=ch;
	printf("\nDecimal : %i ",iCnt);
	printf("\noctal : %o",iCnt);
	printf("\nHexa_Decimal : %x",iCnt);
}	
