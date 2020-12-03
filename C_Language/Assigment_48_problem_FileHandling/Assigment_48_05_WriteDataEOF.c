/*Accept two file name from users copy the comatain of one file to anther*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
void writeEOF(char FileName[],char *Str)
{
	int iFdsrc=0;
	int ret=0;
	
	char Mug[100];
		
	iFdsrc= open(FileName,O_WRONLY | O_APPEND);
	
	if(iFdsrc == -1)
	{
		printf("\n Unable to Open file  SRC :");
		return;
	}
	while((ret = read(iFdsrc,Mug,sizeof(Str)))!=0)
	{

		printf("\nSize of read :%d",ret);
		write(iFdsrc,Mug,ret);
		
	}	
	
	close(iFdsrc);
}
int main()
{
	char FileName[10]={'\0'};
	char Str[30];
	printf("\nEnter Source File Name :");
	scanf("%s",FileName);
	
	printf("\n Enter data to append :");
	scanf(" %[^'\n']s",Str);
	writeEOF(FileName,Str);

	return 0;

}
