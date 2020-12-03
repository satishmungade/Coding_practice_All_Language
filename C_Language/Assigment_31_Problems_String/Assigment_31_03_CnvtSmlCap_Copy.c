/*3. Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.
Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2” */
#include<stdio.h>
void CopySmlCapLater(char *,char *);
int main()
{
	 char Src[30];
	 char Dest[30];
	 printf("Enter A Src String :");
	 scanf("%[^'\n']s",Src);
	 CopySmlCapLater(Src,Dest);
	 printf("Destination Copy String :%s",Dest);

	 return 0;
}
void CopySmlCapLater(char *Src,char *Dest )
{
	int iCnt=0;
	if((Src == NULL) || (Dest == NULL))
    {
        return;
    }
	while(*Src !='\0')
	{

		if(Src[iCnt] >='a' && Src[iCnt]<='z')
		{
			Src[iCnt] = Src[iCnt] - 32;
		}
		*Dest =*Src;
		Src ++;     
		Dest ++;
	}

	*Dest='\0';
	*Dest;
}
