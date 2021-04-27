#include<stdlib.h>
#include <stdio.h>
int main(void)
{
	int iNo;
	int iCounter;
	printf("\n Enter a Number :");
	scanf("%d",&iNo);
	for(iCounter = 1 ; iCounter < iNo ; iCounter ++)
	{
		if(iCounter % 2 == 0)
			continue;
		printf("%d\n",iCounter);

	}	
	exit(0);
}
