#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int iNo;
	int iCounter;
	printf("\n Enter a Number :");
	scanf("%d",&iNo);

	iCounter=0;
	while(iCounter < iNo)
	{
		printf("%d\n",iCounter);
		iCounter ++;
	}

	exit(0);
}