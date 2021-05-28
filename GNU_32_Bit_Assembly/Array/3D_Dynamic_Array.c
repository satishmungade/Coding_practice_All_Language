#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
	int iPlanes;
	int iRows;
	int iColumns;	
	int iCounter1;
	int iCounter2;
	int iCounter3;
	int ***pppPtr = NULL;

	printf("Enter value of planes, rows & columns:\t");
	scanf("%d%d%d", &iPlanes, &iRows, &iColumns);

	pppPtr = (int ***) malloc (iPlanes * sizeof(int **));
	if(NULL == pppPtr)
	{
		puts("Memory allocation FAILED");
		return -1;
	}

	for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
	{
		pppPtr[iCounter1] = (int **) malloc (iRows * sizeof(int *));
		if(NULL == pppPtr[iCounter1])
		{
			puts("Memory allocation FAILED");
			return -1;
		}

		for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
		{
			pppPtr[iCounter1][iCounter2] = (int *) malloc (iColumns * sizeof(int));
			if(NULL == pppPtr[iCounter1][iCounter2])
			{
				puts("Memory allocation FAILED");
				return -1;
			}

			for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
			{
				printf("Enter [%d][%d][%d] value:\t", iCounter1, iCounter2, iCounter3);
				scanf("%d", &pppPtr[iCounter1][iCounter2][iCounter3]);
			}
		}
	}

	printf("Entered elements are:\n");

	for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
		for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
			for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
				printf("[%d][%d][%d] value is:\t%d\n", iCounter1, iCounter2, iCounter3, pppPtr[iCounter1][iCounter2][iCounter3]);
	
	for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
		{
			free(pppPtr[iCounter1][iCounter2]);
			pppPtr[iCounter1][iCounter2] = NULL;
		}
		free(pppPtr[iCounter1]);
		pppPtr[iCounter1] = NULL;
	}
	
	free(pppPtr);
	pppPtr = NULL;

	exit(0);
}

