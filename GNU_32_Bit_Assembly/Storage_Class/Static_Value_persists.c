#include<stdio.h>
#include<stdlib.h>
void fun();
int main(void)
{
	
	int iCnt;
	for(iCnt = 0 ; iCnt < 3 ;iCnt ++)
		fun();
	exit(0);
}
void fun()
{
	int iNo=10;
	static int iNo2=10;
	iNo ++;
	iNo2 ++;
	printf("\n Normal Variable :%d \t static variable %d",iNo,iNo2);
}