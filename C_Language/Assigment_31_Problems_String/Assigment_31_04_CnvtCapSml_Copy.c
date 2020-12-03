/*4. Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.
Input : “Marvellous Python 2”
Output : “marvellous python 2” */
#include<stdio.h>
void CopyCapSmlLater(char *,char *);
int main()
{
	 char Src[30];
	 char Dest[30];
	 printf("Enter A Src String :");
	 scanf("%[^'\n']s",Src);
	 CopyCapSmlLater(Src,Dest);
	 printf("Destination Copy String :%s",Dest);

	 return 0;
}
void CopyCapSmlLater(char *Src,char *Dest )
{
	int iCnt=0;
	if((Src == NULL) || (Dest == NULL))
    {
        return;
    }
	while(*Src !='\0')
	{

		if(Src[iCnt] >='A' && Src[iCnt]<='Z')
		{
			Src[iCnt] = Src[iCnt] + 32 ;
		}
		*Dest =*Src;
		Src ++;     
		Dest ++;
	}

	*Dest='\0';
	*Dest;
}
