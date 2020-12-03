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
void GetInfoHightestmarks(char *FileName)
{
	struct student sobj;
	int Fd=0,iRet=0,iHigh=sobj.iMarks;
	Fd=open(FileName,O_RDONLY);
	if(Fd == -1)
	{
		printf("Unable to open a File");
		return;
	}
	printf("\n Highest Marks student info Display :");
	while((iRet=read(Fd,&sobj,sizeof(sobj)))!=0)
	{

		if(sobj.iMarks > iHigh)
			iHigh=sobj.iMarks;	
	}
	printf("\nHighest Marks is :%d",iHigh);
	close(Fd);
}
int main()
{
	char FileName[10];
	char SName[30];
	printf("\n Enter a FileName :");
	scanf("%s",FileName);
	GetInfoHightestmarks(FileName);
	return 0;
}
