#include<stdio.h>
void Copy(char *Src,char *dest );
int main()
{
	char Src[30];
	char dest[30];
	 printf("Enter A Src String :");
	 scanf("%[^'\n']s",Src);
	 Copy(Src,dest);
	 printf("Destination Copy String :%s",dest);

	 return 0;
}
void Copy(char *Src,char *dest )
{
	int iCnt=0;
	if(Src == NULL)
	{
		return;
	}
	while(*Src !='\0')
	{
		
    	if (!(Src[iCnt] ==' '&& Src[iCnt+1] ==' '))
      	{
       		*dest =*Src;
		     dest ++;
		}     
		Src ++; 
	}

	*dest='\0';
	*dest;
}
