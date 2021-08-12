#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void ReadAFile(char Filename[]);
int main()
{
	char Filename[20]={'\0'};
	printf("\n Enter Your File Which We want to Read :");
	scanf("%[^'\n']s",Filename);
	ReadAFile(Filename);
	return 0;
}

void ReadAFile(char Filename[])
{
	int iFd=0,iCountRD=0;
	char DataRead[50]={'\0'};
	iFd=open(Filename,O_RDWR);
	if(iFd == -1)
	{
		printf("\n Unable to Open :");
	}
	else
	{
		printf("\n File is Succufully opened ");
	}
	iCountRD=read(iFd,DataRead,10);
	if(iCountRD == -1)
	{
		printf("\n Unable to Read a File :");
	}
	else 
	{
		printf(" \n Your File Read Succufully %d:",iCountRD);
	}
	printf("\n\n Your File Data Is :\n%s",DataRead);
	close(iFd);
}	