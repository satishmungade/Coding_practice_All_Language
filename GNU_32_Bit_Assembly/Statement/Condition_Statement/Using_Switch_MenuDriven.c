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
		case 2:
			printf("Substraction \n");
		case 3:
			printf("Multiplation \n");
		case 4:
			printf("Divition \n");
		default:
			printf("Invalid Chioce \n");
	}

	exit(0);
}