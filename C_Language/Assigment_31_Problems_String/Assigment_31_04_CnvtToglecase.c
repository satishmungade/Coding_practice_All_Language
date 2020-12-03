/*5. Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2” */
#include<stdio.h>
void CopyTogalCase(char *,char *);
int main()
{
	 char Src[30];
	 char Dest[30];
	 printf("Enter A Src String :");
	 scanf("%[^'\n']s",Src);
	 CopyTogalCase(Src,Dest);
	 printf("Destination Copy String :%s",Dest);

	 return 0;
}
void CopyTogalCase(char *Src,char *Dest )
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
		else if(Src[iCnt]>='a' && Src[iCnt]<='z')
		{
			Src[iCnt] = Src[iCnt] - 32 ;
		}
		*Dest =*Src;
		Src ++;     
		Dest ++;
	}

	*Dest='\0';
	*Dest;
}
