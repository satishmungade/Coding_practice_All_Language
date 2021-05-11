#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int *pPtr = NULL;

int main()
{
	int iMax;	
	int iCounter;

	printf("Enter value of n:\t");
	scanf("%d", &iMax);

	pPtr = (int *) malloc (iMax * sizeof(int));
	if(NULL == pPtr)
	{
		puts("Memory allocation FAILED");
		exit(-1);
	}

	for(iCounter = 0; iCounter < iMax; iCounter++)
	{
		printf("Enter %d value:\t", iCounter);
		scanf("%d", &pPtr[iCounter]);
	}

	printf("Entered elements are:\n");

	for(iCounter = 0; iCounter < iMax; iCounter++)
		printf("%d value is:\t%d\n", iCounter, pPtr[iCounter]);

	free(pPtr);
	pPtr = NULL;

	exit(0);
}
