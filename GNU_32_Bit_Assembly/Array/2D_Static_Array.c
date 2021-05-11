#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main()
{
	int iRows;
	int iColumns;	
	int iCounter1;
	int iCounter2;
	int arr[MAX][MAX];

	printf("Enter value of rows & columns(< %d):\t", MAX);
	scanf("%d%d", &iRows, &iColumns);

	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
		{
			printf("Enter [%d][%d] value:\t", iCounter1, iCounter2);
			scanf("%d", &arr[iCounter1][iCounter2]);
		}
	}

	printf("Entered elements are:\n");

	for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
		for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
			printf("[%d][%d] value is:\t%d\n", iCounter1, iCounter2, arr[iCounter1][iCounter2]);
	
	exit(0);
}

