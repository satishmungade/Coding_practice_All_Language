#include<stdio.h>
void Copy(char Src[],char dest[] )
{
	int iCnt=0;
	if(Src == NULL)
	{
		return;
	}
	
	/*while(Src[iCnt] !='\0')
	{
		dest[iCnt]=Src[iCnt]; //Using Array
		iCnt ++; 

	}
	dest[iCnt]='\0';
	*/
	while(*Src !='\0')
	{
		*dest =*Src;
		Src ++;       //using Pointer
		dest ++;
	}

	*dest='\0';
	*dest;
}
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