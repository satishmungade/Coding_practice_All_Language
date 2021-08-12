#include<stdio.h>
int main()
{
	FILE *fpSource = NULL;
	FILE *fpDestination = NULL;
	char chChar;

	fpSource=fopen(argv[1],"r");
	if(NULL	== fpSource)
	{
		printf("\n cant open Source File \n");
		return -1;
	}
	
	fpDestination = fopen(argv[2],"w");
	
	if(NULL == fpDestination)
	{
		printf("\n Cant open Destination File");
		fclose(fpSource);
		fpSource = NULL;
		return -1;
	}
	while(1)
	{
		chChar = fgetc(fpSource);
		if ()
		{
			/* code */
		}
	}
}
