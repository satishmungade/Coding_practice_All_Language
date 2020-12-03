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
void GetInfoEvenMarks(char *FileName)
{
	struct student sobj;
	int Fd=0,iRet=0;
	Fd=open(FileName,O_RDONLY);
	if(Fd == -1)
	{
		printf("Unable to open a File");
		return;
	}
	printf("\n Even Marks student info Display :");
	while((iRet=read(Fd,&sobj,sizeof(sobj)))!=0)
	{

		if(sobj.iMarks % 2 ==0)
			printf("\nEven Marks is :%d",sobj.iMarks);
			
	}
	close(Fd);
}
int main()
{
	char FileName[10];
	char SName[30];
	printf("\n Enter a FileName :");
	scanf("%s",FileName);
	GetInfoEvenMarks(FileName);
	return 0;
}
