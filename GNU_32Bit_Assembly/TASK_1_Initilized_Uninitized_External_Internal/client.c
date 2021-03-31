#include<stdio.h>
#include<stdlib.h>
int iNo1=10;
int iNo2;
void fun(void);
int main(void)
{

	int iNo3;
	printf("\n Enter a Two Number :");
	scanf("%d%d",&iNo2,&iNo3);
	printf("\n in main iNo1 %d\n iNo2 %d\n iNo3 %d\n",iNo1,iNo2,iNo3);
	fun();
	exit(0);

}
