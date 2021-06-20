#include<stdio.h>
#include<stdlib.h>
char * mystrcat(char *,const char *);
int main(void)
{
	char source[20],destination[40];
	printf("\n\n Enter Destination string :");
	gets(destination);
	printf("\n Enter source String :");
	gets(source);
	mystrcat(destination,source);
	printf("\n Concatenated String is :");
	puts(destination);

	exit(0);
}

char * mystrcat(char *destination,const char *source)
{
	int iCnt1=0;
	int iCnt2=0;

	while(destination[iCnt1] != '\0')
	{
		iCnt1 ++;
	}
	
	
	while(source[iCnt2] !='\0')
	{
		destination[iCnt1]=source[iCnt2];
		iCnt2 ++;
		iCnt1 ++;
	}
	destination[iCnt1]='\0';
	return destination;
}


