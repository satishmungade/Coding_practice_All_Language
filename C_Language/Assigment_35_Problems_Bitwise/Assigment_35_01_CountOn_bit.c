#include<stdio.h>
typedef unsigned int UINT ;
int CountOne(UINT iNo);
int main()
{
	int iNo=0,iRet=0;
	printf("Enter A Number ");
	scanf("%d",&iNo);
	iRet=CountOne(iNo);
	printf("Number of Bit is One Count :%d",iRet);
	return 0;
}
int CountOne(UINT iNo)
{
	int iCount=0;
	while (iNo != 0) 
		{ 
        	iCount += iNo & 1; //Assign Sum
        	iNo >>= 1; //Assign RightShit
    	} 
    return iCount;
}