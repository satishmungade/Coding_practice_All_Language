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
void GetInfoByNameP(char *FileName)
{
	struct student sobj;
	int Fd=0,iRet=0,iCnt=0;
	Fd=open(FileName,O_RDONLY);
	if(Fd == -1)
	{
		printf("Unable to open a File");
		return;
	}
	printf("\n information Display student Name 6 later :");
	while((iRet=read(Fd,&sobj,sizeof(sobj)))!=0)
	{
		
			iRet=strlen(sobj.Name);
			if(iRet == 6)
			{
				printf("\n-----------------------------------");
        		printf("\nRoll number  is :%d",sobj.iRollNo);
        		printf("\nStudent Name is :%s",sobj.Name);
        		printf("\n%s  Marks is  : %d\n",sobj.Name,sobj.iMarks);
			}
		
			
	}
	close(Fd);
}
int main()
{
	char FileName[10];
	char SName[30];
	printf("\n Enter a FileName :");
	scanf("%s",FileName);
	GetInfoByNameP(FileName);
	return 0;
}
