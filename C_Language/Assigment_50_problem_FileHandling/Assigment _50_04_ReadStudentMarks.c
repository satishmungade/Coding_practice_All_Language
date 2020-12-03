/*Write a program which accept file name which contains information of
student and display only marks of students.*/
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

void ReadStudentMarks(char *FileName)
{
    int Fd = 0, iRet = 0;
    struct student sobj;
    
    Fd = open(FileName,O_RDONLY);
    if(Fd == -1)
    {
        printf("Unable to open file\n");
        return ;
    }
    
    printf("\n !!Display the Student Marks Only !!:\n\n");
    
    while((iRet = read(Fd,&sobj,sizeof(sobj)))!= 0)
    {
        printf("\n%s  Marks is  : %d\n",sobj.Name,sobj.iMarks);
    }
    
    close(Fd);
}
int main()
{
	char Name[20];
	printf("\nEnter a File :");
	scanf("%s",Name);
	ReadStudentMarks(Name);
	return 0;
}