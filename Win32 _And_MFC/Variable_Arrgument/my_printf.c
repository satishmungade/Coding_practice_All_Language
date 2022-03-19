#include<stdio.h>
#include<stdarg.h>
int Addition(int ,...);
int MyPrintf(const  char *,...);

int main(void)
{
	int iNo=10;
	int iNo1=20;
	int iNo2=30;
	int iNo3=40;
	int iAns=0;
	iAns=Addition(2,10,20);
	MyPrintf("\nAddition of this Numbers %d + %d = %d ",iNo,iNo1,iAns);
	iAns=Addition(3,10,20,30);
	MyPrintf("\nAddition of this Numbers %d + %d + %d = %d ",iNo,iNo1,iNo2,iAns);
	iAns=Addition(4,10,20,30,40);
	MyPrintf("\nAddition of this Numbers %d + %d + %d + %d = %d ",iNo,iNo1,iNo2,iNo3,iAns);

	MyPrintf("\n Krishana playing game");
	return 0;

}

int Addition(int iCount,...)
{
	int iAns;
	int iCnt;
	va_list pArgs=NULL;
	//pArgs will point to element present after iCount
	va_start(pArgs,iCount);
	//its return value present at *pArges w.r.t integer &
	//does pointer arithmetic (+) by sizeof(int)
	for(iCnt = 0 , iAns = 0 ; iCnt < iCount ; iCnt ++)
			iAns = iAns + va_arg(pArgs,int);

	va_end(pArgs);     //pArgs=NULL
	return iAns;
}
int MyPrintf(const char *pzFormat,...)
{
	int iRet;
	va_list pArgs=NULL;
	va_start(pArgs,pzFormat);
	iRet =vprintf(pzFormat,pArgs);

	va_end(pArgs);
	
	return iRet;
}


