#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void OpenFileReadMode();
int main()
{
	OpenFileReadMode();
	return 0;
}
void OpenFileReadMode()
{
	int iFd=0;
	char Filename[30];
	printf("\n Enter a Your File name Which You Want Read :");
	scanf("%[^'\n']",Filename);
	iFd=open(Filename,O_RDWR);
	if(iFd == -1)
	{
		printf("\n Unable to Open a File :");
	}
	else
	{
		printf("\n File is Successfully Opend with Read Mode Fd is : %d",iFd);
	}
	close(iFd);
}