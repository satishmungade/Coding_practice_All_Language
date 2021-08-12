#include<stdio.h>
int main(void)
{
	FILE *fpSource = NULL;
	FILE *fpDestination = NULL;
	char chChar;

	fpSource = fopen("file_copy_source.txt","r");
	if(NULL == fpSource)
	{
		printf("\n Cant open source file :");
		return -1;
	}
	fpDestination =fopen("file_copy_destination.txt","w+");
	if(NULL == fpDestination)
	{
		printf("\n Cant open Destination file :");
		return -1;
	}
	while(1)
	{
		chChar = fgetc(fpSource);
		if(chChar == EOF)
			break;
		fputc(chChar,fpDestination);

	}
	fclose(fpSource);
	fpSource = NULL;
	fclose(fpDestination);
	fpDestination = NULL;
	printf("\n copied successfully :");

}
