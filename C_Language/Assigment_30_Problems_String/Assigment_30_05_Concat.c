#include<stdio.h>
int MySrcLenth(const char Src[] );
void MySrcConcat( char *,char * );
int main()
{
	char Src[100],Dest[100];
	int iNo=0;

	printf("\n Enter Your First Srcing :");
	scanf("%[^'\n']s",Src);

	printf("\n Enter Your Secound Srcing :");
	scanf(" %[^'\n']s",Dest);
	
	MySrcConcat(Src,Dest);
	printf("\n Your Srcing is ConCat new Location : %s",Src);
	
	return 0;
}
void MySrcConcat(char *Src,char *Dest)
{
	int iCounter=0,iCounter1=0;
	
/*	while(Src[iCounter] !='\0')
	{
		iCounter++;
	}
	while(Dest[iCounter1] != '\0')
	{						
							//Using Array
		Src[iCounter] = Dest[iCounter1];
		iCounter ++;
		iCounter1 ++;

	}
		Src[iCounter]='\0';
		*Src;  */
	

	while(*Src !='\0')
	{
		Src ++;
	}

	while(*Dest !='\0')
	{
		
		*Src=*Dest;
		Src ++;       //using Pointer
		Dest ++;
	}
	
	*Src='\0';
	*Src;
		
	
}
