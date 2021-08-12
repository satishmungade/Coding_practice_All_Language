#include <stdio.h>
int main(void)
{
	FILE *fp=NULL;
	int iNoOfChars = 0;
	int iNoOfSpace = 0;
	int iNoOfTabs  = 0;
	int iNoOfLine   = 0;

	char chChar;

	fp= fopen("char_space_tab_newline_count.txt","r");
	if (fp == NULL)
	{
		printf("\n cant open the file");
		return -1;

	}
	while(1)
	{
		chChar =fgetc(fp);
		if (chChar == EOF)
			break;
		
		iNoOfChars ++;

		if(chChar == ' ')
			iNoOfSpace ++;

		else if (chChar	== '\t')
			iNoOfTabs ++;

		else if(chChar == '\n')
			iNoOfLine ++;

	}
	fclose(fp);
	fp = NULL;

	printf("\n No of characters are %d:",iNoOfChars);
	printf("\n No of space are %d:",iNoOfSpace);
	printf("\n No of Tab are %d:",iNoOfTabs);
	printf("\n No of Line  are %d:",iNoOfLine);
		


	return 0;
}