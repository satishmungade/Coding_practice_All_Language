#include<stdio.h>
void Display(char);
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
	int iCnt=0,iCnt1=0;

	if( 65 > ch )
	{
		printf("Error : No output");
		return ;

	}
	for(iCnt=ch; iCnt <= 90 ; iCnt ++)
	{
		printf("%c\t",iCnt);
		if(iCnt==90)
			return ;
	}

	for(iCnt1=ch; iCnt1 <= 122 ; iCnt1 ++)
	{
			printf("%c\t",iCnt1);
	}
}	