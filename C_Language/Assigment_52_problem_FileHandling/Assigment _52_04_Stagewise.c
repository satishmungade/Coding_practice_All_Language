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
	printf("\n Display marks student Stage :");
	while((iRet=read(Fd,&sobj,sizeof(sobj)))!=0)
	{
			
			if(sobj.iMarks >= 60 && sobj.iMarks <= 100)
			{
				printf("\n-----------First Class---------------------");
        		printf("\nRoll number  is :%d",sobj.iRollNo);
        		printf("\nStudent Name is :%s",sobj.Name);
        		printf("\n%s  Marks is  : %d\n",sobj.Name,sobj.iMarks);
			}
			else if(sobj.iMarks >= 50 && sobj.iMarks <= 60)
			{

				printf("\n-------------Second class----------------------");
        		printf("\nRoll number  is :%d",sobj.iRollNo);
        		printf("\nStudent Name is :%s",sobj.Name);
        		printf("\n%s  Marks is  : %d\n",sobj.Name,sobj.iMarks);
			}
			else
			{

				printf("\n-------------pass Class----------------------");
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
