#include<stdio.h>
void DisplayAscciTable();

int main()
{
	char chChar='\0';
	DisplayAscciTable();

	return 0;
}
void DisplayAscciTable()
{
	int iCnt ;
	printf("Decimal|Octual|Hexa Decimal|Char|Number| \n");
	for(iCnt=0 ;iCnt <= 255 ;iCnt ++)
	{
		printf("\t%i|\t%o|\t%x|\t%c|%d\n",iCnt,iCnt,iCnt,iCnt,iCnt);
	}
}	
