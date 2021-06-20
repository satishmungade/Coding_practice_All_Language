#include<stdio.h>
#include<stdlib.h>

char * mystrncat(char *destination,const char *source,int ipos);
int main(void)
{
	char source[20],destination[40];
	int ipos=0;
	printf("\n\n Enter Destination string :");
	gets(destination);
	printf("\n Enter source String :");
	gets(source);
	printf("\n Enter value of N..:");
	scanf("%d",&ipos);
	
    mystrncat(destination,source,ipos);
	
    printf("\n Concatenated String is :");
	puts(destination);

	exit(0);
}

char * mystrncat(char *destination,const char *source,int ipos)
{
	int iCnt1=0;
	int iCnt2=0;

	while(destination[iCnt1] != '\0')
	{
		iCnt1 ++;
	}
	
	while(source[iCnt2] !='\0')
	{
        if(ipos == iCnt2 )
            break;		
        destination[iCnt1]=source[iCnt2];
		iCnt2 ++;
		iCnt1 ++;
	}
	destination[iCnt1]='\0';
	return destination;
}


