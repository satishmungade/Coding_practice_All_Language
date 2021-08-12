#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void CreateAFile();
int main()
{
	CreateAFile();
	return  0;
}
void CreateAFile()
{
	char FileName[20]={'\0'};
	int iFd=0;
	printf("\n Enter a File Name Which We wont to Create :");
	scanf("%[^'\n']s",FileName);
	iFd=creat(FileName,0777);
	if(iFd == -1)
	{
		printf("\n Unable to create a File");
	}
	else
	{
		printf("\n Your File SuccesFully Created and Your FD is :%d",iFd);
	}
	close(iFd);

}	
	