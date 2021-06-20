#include <stdio.h>
char *  mystrupr(char *);
int main(void)
{
	char String[20];
	printf("\n Enter A String :");
	gets(String);

	mystrupr(String);
	printf("\n String in Upper case :");
	puts(String);

	return 0;
}

char * mystrupr(char *String)
{
	int iCnt=0;
	while(String[iCnt] != '\0')
	{
		if(String [iCnt] >= 'a' && String[iCnt] <= 'z')
		{
			String[iCnt]= String[iCnt]-32;
		}

		iCnt ++;	
	} 
	return String;
}	
