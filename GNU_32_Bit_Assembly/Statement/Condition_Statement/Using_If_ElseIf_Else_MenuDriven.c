#include<stdlib.h>
#include <stdio.h>
int main(void)
{
	int iChoice;
	printf("\n\t 1.Addition \n\t 2.Substraction \n\t 3.Multiplaction \n\t 4.Divition \n ");
	printf("\n Enter a Chioce :");
	scanf("%d",&iChoice);

	if(iChoice == 1)
		printf("Addition \n ");
	else if(iChoice == 2)
		printf("Substraction \n");
	else if(iChoice == 3)
		printf("Multiplaction \n");
	else if(iChoice == 4)
		printf("Divition \n");
	else
		printf("Invalid Chioce \n");
	exit(0);
}	
