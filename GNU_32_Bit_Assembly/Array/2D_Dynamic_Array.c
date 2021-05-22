#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
	int iRows;
	int iColumns;	
	int iCounter1;
	int iCounter2;
	int **ppPtr = NULL;

	printf("Enter value of rows & columns:\t");
	scanf("%d%d", &iRows, &iColumns);

	ppPtr = (int **) malloc (iRows * sizeof(int *));
	if(NULL == ppPtr)
	{
		puts("Memory allocation FAILED");
		return -1;
	}

	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
	{
		ppPtr[iCounter1] = (int *) malloc (iColumns * sizeof(int));
		if(NULL == ppPtr[iCounter1])
		{
			puts("Memory allocation FAILED");
			return -1;
		}

		for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
		{
			printf("Enter [%d][%d] value:\t", iCounter1, iCounter2);
			scanf("%d", &ppPtr[iCounter1][iCounter2]);
		}
	}

	printf("Entered elements are:\n");

	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
		for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
			printf("[%d][%d] value is:\t%d\n", iCounter1, iCounter2, ppPtr[iCounter1][iCounter2]);

	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
	{
		free(ppPtr[iCounter1]);
		ppPtr[iCounter1] = NULL;
	}

	free(ppPtr);
	ppPtr = NULL;

	exit(0);
}
