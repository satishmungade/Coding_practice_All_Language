#include<stdlib.h>
#include <stdio.h>
int main(void)
{
	int iChoice;
	printf("\n\t 1.Addition \n\t 2.Substraction \n\t 3.Multiplation \n\t 4.Divition \n ");
	printf("\n Enter a Chioce :");
	scanf("%d",&iChoice);
	switch(iChoice)
	{
		case 1:
			printf("Addition \n ");
			break;
		case 2:
			printf("Substraction \n");
			break;
		case 3:
			printf("Multiplation \n");
			break;
		case 4:
			printf("Divition \n");
			break;
		default:
			printf("Invalid Chioce \n");
			
	}

	exit(0);
}