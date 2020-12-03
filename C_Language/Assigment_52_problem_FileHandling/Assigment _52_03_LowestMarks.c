#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>
struct student
{
	int iRollNo;
	char Name[30];
	int iMarks;
};
void GetInfoLowestmarks(char *FileName)
{
	struct student sobj;
	int Fd=0,iRet=0,iCnt=0,iLow=sobj.iMarks;
	Fd=open(FileName,O_RDONLY);
	if(Fd == -1)
	{
		printf("Unable to open a File");
		return;
	}
	printf("\n avarage marks student info Display :");
	while((iRet=read(Fd,&sobj,sizeof(sobj)))!=0)
	{
		if(sobj.iMarks < iLow);
			iLow=sobj.iMarks;
	}
	printf("\nLowest marks is :%d",iLow);
	close(Fd);
}
int main()
{
	char FileName[10];
	char SName[30];
	printf("\n Enter a FileName :");
	scanf("%s",FileName);
	GetInfoLowestmarks(FileName);
	return 0;
}
