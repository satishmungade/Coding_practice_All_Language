/*1. Write a program which accept information of students from user and
write that information into the file. */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
struct student
{
	int iRollNo;
	char Name[30];
	int iMarks;	
};
void StudentInfoAccept(char *FileName)
{
	int Fd=0,iSize=0,iCnt=0;
	struct student sobj;
	Fd=open(FileName, O_WRONLY | O_APPEND);
	if(Fd == -1)
	{
		printf("\n Unable to open File :");
		return ;
	}
	printf("\n\n Enter a Number That Numberof Student data Stored :");
	scanf("%d",&iSize);
	for(iCnt =1 ;iCnt <= iSize ; iCnt ++)
	{
		printf("\nEnter a RollNo :");
		scanf("%d",&sobj.iRollNo);

		printf("\nEnter a Name  :");
		scanf("%s",&sobj.Name);

		printf("\nEnter A iMarks 1 To 100 :");
		scanf("%d",&sobj.iMarks);

		write(Fd,&sobj,sizeof(sobj));	
	}
	close(Fd);
}

void StudentInfoRead(char *FileName)
{
    int Fd = 0, iRet = 0;
    struct student sobj;
    
    Fd = open(FileName,O_RDONLY);
    if(Fd == -1)
    {
        printf("Unable to open file\n");
        return ;
    }
    
    printf("\n !!Display the Student information !!:\n");
    
    while((iRet = read(Fd,&sobj,sizeof(sobj)))!= 0)
    {
    	printf("\n-----------------------------------");
        printf("\nRoll number  is :%d",sobj.iRollNo);
        printf("\nStudent Name is :%s",sobj.Name);
        printf("\n%s  Marks is  : %d\n",sobj.Name,sobj.iMarks);
       
    }
    
    close(Fd);
}
int main()
{
	char Name[20];
	printf("\nEnter a File :");
	scanf("%s",Name);
	StudentInfoAccept(Name);
	StudentInfoRead(Name);
	return 0;
}
