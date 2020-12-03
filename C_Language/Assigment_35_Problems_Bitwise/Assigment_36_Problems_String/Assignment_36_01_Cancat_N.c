#include<stdio.h>
void StrNCat(char *,char *,int);
int main()
{
	char Src[50] ,Dest[50];
	int iNo=0;
	printf("\nEnter A source String :");
	scanf("%[^'\n']s",Src);
	printf("\nEnter A Destination String :");
	scanf(" %[^'\n']s",Dest);
	printf("\nEnter A Position :");
	scanf(" %d",&iNo);
	StrNCat(Src,Dest,iNo);
	printf("Concat The String N Number :%s",Src);
	return 0;
}

void StrNCat(char *Src,char *Dest,int iNo)
{
	if(Src == NULL && Dest == NULL)
	{
		return ;
	}
	if(iNo == -1)
	{
		return;
	}
	while(*Src !='\0')
	{
		Src ++;
	}
	while((*Dest !='\0') && (iNo !=0))
	{
		*Src=*Dest	;
		 Src ++;
		 Dest ++;
		iNo --;
	}
	*Src='\0';
}