#include<stdlib.h>
#include <stdio.h>
int main(void)
{
	int iNo;
	int iCounter;
	printf("\n Enter a Number :");
	scanf("%d",&iNo);
	for(iCounter = 0 ; iCounter < iNo ; iCounter ++)
		printf("%d\n",iCounter);

	exit(0);
}