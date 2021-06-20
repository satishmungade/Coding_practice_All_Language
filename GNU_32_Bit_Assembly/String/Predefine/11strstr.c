#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],str2[20];
	char *ptr;
	printf("\n\n Enter the string1 :");
	gets(str);
	printf("Enter String to be found:");
	gets(str2);
	ptr=strstr(str,str2);
	if(ptr == NULL)
		printf("\n character is Not Found :");
	else
	{	
		printf("\n String is Found At %d location \n",(ptr-str)+1);
		printf("\n String Found in %s\n",ptr);
	}
	return 0;
}