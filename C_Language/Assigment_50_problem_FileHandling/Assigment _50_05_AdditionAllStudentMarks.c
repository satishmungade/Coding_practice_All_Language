/* Write a program which accept file name which contains information of
student and display addition of marks of all sudents.*/
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

void ReadStudentMarksAdd(char *FileName)
{
    int Fd = 0, iRet = 0,Marks=0;
    struct student sobj;
    
    Fd = open(FileName,O_RDONLY);
    if(Fd == -1)
    {
        printf("Unable to open file\n");
        return ;
    }
    
    printf("\n !!Display the All Student Marks Addition Only !!:\n\n");
    
    while((iRet = read(Fd,&sobj,sizeof(sobj)))!= 0)
    {
        Marks = Marks + sobj.iMarks;

    }
    printf(" Addition of All Students Marks : %d\n",Marks);
    
    close(Fd);
}
int main()
{
	char Name[20];
	printf("\nEnter a File :");
	scanf("%s",Name);
	ReadStudentMarksAdd(Name);
	return 0;
}