#include<stdio.h>
void DisplayEvanFactor(int);
int main()
{
	int iNo;
	printf("Enter a number :");
	scanf("%d",&iNo);

	DisplayEvanFactor(iNo);

	return 0;
}
void DisplayEvanFactor(int iNo)
{
	int iCounter=0;
	if(iNo <= 0)
	{
		iNo = -iNo ;

	}
	for (iCounter = 1; iCounter <= iNo /2 ; iCounter ++)
	{
		if((iNo % iCounter == 0) && iCounter % 2 ==0 )
		{
			if(iCounter == 4)
			{
				continue;  	  	
				
			}
			printf("%d\t",iCounter);
		}	
	}
}