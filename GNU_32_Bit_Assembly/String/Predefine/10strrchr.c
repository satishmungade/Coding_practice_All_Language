#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	char *ptr;
	printf("\n\n Enter the string :");
	gets(str);
	printf("Enter character to be Found :");
	scanf("%c",&ch);
	ptr=strrchr(str,ch);
	if(ptr == NULL)
		printf("\n character is Not Found :");
	else
		printf("\n character is Found At %d location \n",(ptr-str)+1);

	return 0;
}