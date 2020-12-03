/*1. Write a program which accepts file name from user and count number of
capital characters from that file.
Input : Demo.txt
Output : Number of capital characters are 23 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
int CountCapitalFile(char FileName[])
{
		char ReadData[100]={'\0'};
		int iFd=0,iCountRd=0,iLenght=0,iCapCount=0,iCnt;
		
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
				if(ReadData[iCnt] >= 'A' && ReadData[iCnt] <= 'Z' )
				{
					iCapCount ++;
				
				}
			}	
				ReadData[iCnt] ++;
		}

		return iCapCount;
	close(iFd);
}
int main()
{
	char FileName[20];
	int iRet=0;
	printf("\n Enter Your File Name :");
	scanf("%[^'\n']s",FileName);
	
	iRet=CountCapitalFile(FileName);
	printf("\n\nNumber of Capital characters are :%d",iRet);
	
	return 0;
}