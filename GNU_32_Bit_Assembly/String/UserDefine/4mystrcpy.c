#include<stdio.h>
#include<stdlib.h>
char * mystrcpy(char *,char *);
int main(void)
{
	char source[20];
	char destination[40];
	printf("\n Enter Source String :");
	gets(source);
	printf("\n source string is \t:");
	puts(source);

	mystrcpy(source,destination);
	printf("\n destination string is \t:");
	puts(destination);
	exit (0);
}

char * mystrcpy(char source[],char destination[])
{
	int iCnt=0;
	while(source[iCnt] != '\0')
	{
		destination[iCnt]=source[iCnt];
		iCnt ++;
	}
	destination[iCnt]='\0';
	return destination;
}