/*1. Write a program which accepts file name from user and count number of
Small characters from that file.
Input : Demo.txt
Output : Number of Small characters are 23 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
int CountM(char FileName[])
{
		char ReadData[100]={'\0'};
		int iFd=0,iCountRd=0,iSmlCount=0,iCnt;
		
		iFd=open(FileName,O_RDONLY);
		if(iFd == -1)
		{
			printf("Unable to open File :");
			return 0;
		}
		while((iCountRd=read(iFd,ReadData,sizeof(ReadData)))!=0)
		{
			for(iCnt=0 ;iCnt < iCountRd ; iCnt ++)
			{	
				if(ReadData[iCnt] == 'M' )
				{
					iSmlCount ++;
				
				}
			}	
				ReadData[iCnt] ++;
		}

		return iSmlCount;
	close(iFd);
}
int main()
{
	char FileName[20];
	int iRet=0;
	printf("\n Enter Your File Name :");
	scanf("%[^'\n']s",FileName);
	
	iRet=CountM(FileName);
	printf("\n\n Frequency of M is :%d",iRet);
	
	return 0;
}