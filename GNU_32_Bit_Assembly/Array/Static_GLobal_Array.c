#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int Arr1[3]={10,20,30};
int Arr2[MAX];
int main(void)
{
	int iMax;
	int iCounter;
	printf("\n value of N (< : %d) ",MAX);
	scanf("%d",&iMax);
	for(iCounter = 0 ; iCounter < iMax ; iCounter ++)
	{
		printf("\n Enter value  %d Index Number  :",iCounter);
		scanf("%d",&Arr2[iCounter]);
	}
	printf("\n Array 1 is ");
	
	for(iCounter =0 ; iCounter < 3 ; iCounter ++)
		printf("\n index is [%d] value is %d",iCounter,Arr1[iCounter]);

	printf("\n Array 2 is :");

	for(iCounter =0 ; iCounter < iMax ; iCounter ++)
		printf("\n index is [%d] value is %d",iCounter,Arr2[iCounter]);

	exit(0);
}