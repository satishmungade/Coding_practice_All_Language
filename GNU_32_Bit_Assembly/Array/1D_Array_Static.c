#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main()
{
	int iMax;	
	int iCounter;
	int arr[MAX];

	printf("Enter value of n(< %d):\t", MAX);
	scanf("%d", &iMax);

	for(iCounter = 0; iCounter < iMax; iCounter++)
	{
		printf("Enter %d value:\t", iCounter);
		scanf("%d", &arr[iCounter]);
	}

	printf("Entered elements are:\n");

	for(iCounter = 0; iCounter < iMax; iCounter++)
		printf("%d value is:\t%d\n", iCounter, arr[iCounter]);

	exit(0);
}

