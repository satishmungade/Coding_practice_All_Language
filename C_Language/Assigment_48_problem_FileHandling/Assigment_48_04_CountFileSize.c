#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

int FileSize(char *FileName)
{
	int  Fd=0,ret=0;
	Fd=open(FileName,O_RDONLY);
	if(Fd==-1)
	{
		printf("Unable to Open  :");
		return -1;
	}
	ret=lseek(Fd,0,SEEK_END);
	close(Fd);
	return ret;
}
int main()
{
	char FileName[20];
	int iRet=0;
	printf("\n Enter Your File Name :");
	scanf("%s",FileName);
	iRet=FileSize(FileName);
	printf("\n Your File Size is:%d",iRet);
	return 0;
}

