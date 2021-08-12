#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
void FileReadAtPos(char *Src,int iPos)
{
	int fd=0,ret=0,iRet;
	char Mug[100]={'\0'};
	fd=open(Src,O_RDONLY);
	if(fd== -1)
	{
		printf("\nUnable to open a file :");
		return;
	}
	ret=lseek(fd,iPos,SEEK_SET);
	//printf("\n Return value of Lseek %d:",ret);
	
	ret=read(fd,Mug,50);
	
	//printf("\n Data from the file :");
	//printf("\n return value of read :%d \n",ret);
	
	write(1,Mug,ret);

	printf("\n");	
	close(fd);
}
int main()
{
	int iPos=0;
	char FileName[10]={'\0'};
	
	printf("\nEnter Source File Name :");
	scanf("%s",FileName);
	printf("\nEnter a Pos :");
	scanf("%d",&iPos);
	FileReadAtPos(FileName,iPos);

	return 0;

}