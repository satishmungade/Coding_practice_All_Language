/*2. Write a program which read all the information of students from the
file.*/
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
    
    printf("\n !!Display the Student inFo !!:\n");
    
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
	StudentInfoRead(Name);
	return 0;
}