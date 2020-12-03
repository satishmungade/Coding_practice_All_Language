/* 2. Write a program which accept string from user and copy that
characters of that string into another string by removing all white spaces.
Output : “MarvellousPython” */
#include<stdio.h>
void Copy(char *,char *);
int main()
{
	 char Src[30];
	 char Dest[30];
	 printf("Enter A Src String :");
	 scanf("%[^'\n']s",Src);
	 Copy(Src,Dest);
	 printf("Destination Copy String :%s",Dest);

	 return 0;
}
void Copy(char *Src,char *Dest )
{
	int iCnt=0;
	if((Src == NULL) || (Dest == NULL))
    {
        return;
    }

	while(*Src!='\0')
	{
		if(!(*Src== ' '))
		{	
			*Dest =*Src;
			 Dest ++;			     
		}
		Src ++;  
	}
	*Dest='\0';
	*Dest;
}
