#include <stdio.h>
int mystrcmp(char *,char *);

int main(void)
{
	char String1[20],String2[20];
	int iFlag;
	printf("\n Enter First String :");
	gets(String1);
	printf("\n Enter Secound String :");
	gets(String2);

	iFlag = mystrcmp(String1,String2);
	if(iFlag == 0)
		printf("\n Both String is Same \n ");
	else
		printf("\n Both String is Diffrant \n");
	
	return 0;
}

int mystrcmp(char *String1 ,char *String2)
{
	int iCnt1=0,iCnt2=0;
	while(String1[iCnt1] != '\0' &&  String2[iCnt2] !='\0')
	{
		if(String1[iCnt1]== String2[iCnt2])
			iCnt1 ++;
		
		iCnt2 ++;
	
	}
	if(iCnt2 == iCnt1)
		return 0;
	else
		return -1;

}