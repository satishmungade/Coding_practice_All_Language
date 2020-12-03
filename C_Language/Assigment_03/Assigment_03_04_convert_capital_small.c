#include<stdio.h>
void DisplayConvert(char);
int main()
{
	char chChar='\0';
	printf("Enter a Character :");
	scanf("%c",&chChar);
	DisplayConvert(chChar);

	return 0;
}
void DisplayConvert(char chChar)
{
	if(chChar >96)
	{
		chChar=chChar - 32;
		printf("%c",chChar);
	}
	else if(chChar <=97)
	{
		chChar=chChar + 32;
		printf("%c",chChar);
	} 
}
