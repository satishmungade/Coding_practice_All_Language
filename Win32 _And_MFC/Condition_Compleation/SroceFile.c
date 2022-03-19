#include<string.h>
#include<stdio.h>
#include "Header.h"
#include "log.h"
int main(void)
{
	int iNo;
	int iNo1;
	int iAns;
	char cszStr[260]={0};
	
	printf("\n Enter Two Number For Addition ");
	scanf("%d%d",&iNo,&iNo1);

	//#if DEBUG_MAIN
	#ifndef CREATE_LOG
	CreateLog(&pLogFile);
	#endif  //Createlog
	//#endif   //BUGMAIN

	
	#if DEBUG_MAIN
	fputs("in Main \n",pLogFile);
	#endif

	sprintf(cszStr,"Before calling Addition Function values Forwording %d,%d\n",iNo,iNo1);
	#if DEBUG_MAIN
	fputs(cszStr,pLogFile);
	#endif
	fflush(pLogFile);
	

	//char *pz="Hello";
	//strcat(pz,"Hello");

	//fflush(pLogFile);
	iAns=Addition(iNo,iNo1);
	printf("\n Addition is :%d\n",iAns );
	
	sprintf(cszStr,"Addition value is :%d\n Leaving main Bye :",iAns);
	
	#if DEBUG_MAIN
	fputs(cszStr,pLogFile);
	#endif
	
	if(pLogFile != NULL)
	{
		fclose(pLogFile);
		pLogFile =NULL;
	}

	return 0;
}
int Addition(int iNo ,int iNo1)
{
	#if DEBUG_ADDITION
	fputs("in Addition Function\n",pLogFile);
	#endif
	//fflush(pLogFile);
	return iNo + iNo1;

}
void CreateLog(FILE **ppFile)
{
	#define CREATE_LOG 1
	*ppFile = fopen("log.txt","w");
	if(*ppFile == NULL)
		printf("Log File Creation Faild");

}