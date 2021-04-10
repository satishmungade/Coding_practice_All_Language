#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	int iData;
	struct Stack *pNext;
};
typedef struct Stack NODE;
typedef struct Stack * PNODE;
typedef struct Stack ** PPNODE;

void Push(PPNODE,int);         //InsertFirst  SinglyLinerLinkedList
int Pop(PPNODE);				//DeleteFirst  SinglyLinerLinkedList
void Display(PNODE);
int Count(PNODE);


int main()
{
	PNODE pFirst=NULL;
	int iCount=0,iNo=0,iChoice=0,iDelData=0;

	while(1)
	{
		printf("\n\n 1.Push\n 2.Pop\n 3.Count\n 4.Display\n 0.Exit");
		printf("\nEnter Your Choice \t:");
		scanf("%d",&iChoice);
		switch(iChoice)
		{
			case 1:
					printf("\nEnter A Element to Push \t:");
					scanf("%d",&iNo);
					Push(&pFirst,iNo);
					Display(pFirst);
				break;

			case 2:
					iDelData=Pop(&pFirst);
					printf("\n\n poped First Element in Stack %d\n",iDelData);
					Display(pFirst);
				break;

			case 3:
					iCount=Count(pFirst);
					printf("\n Total Element in Aviable Stack %d",iCount);
				break;
			
			case 4:
					Display(pFirst);
				break;
			case 0:
					printf("\n Thank you for using the application\n");
                return 0;
                
            default:
                printf("Wrong choice\n");
				
		}
	}
	return 0;
}	

void Push(PPNODE ppHead,int iNo)
{
	PNODE NewNode =NULL;
	NewNode=(PNODE)malloc(sizeof(NODE));
	NewNode->pNext=NULL;
	NewNode->iData=iNo;
	if(ppHead == NULL)
	{
		(*ppHead)=NewNode;
	}
	else
	{
		NewNode->pNext=(*ppHead);
		(*ppHead)=NewNode;
	}
}
int Pop(PPNODE ppHead)
{
	int iNo=-1;
	PNODE Temp=*ppHead;
	if(ppHead == NULL)
	{
		return iNo;
	}
	else
	{
		iNo=(*ppHead)->iData;
		*ppHead=(*ppHead)->pNext;
		free(Temp);
		return iNo;
	}
	
}
void Display(PNODE pHead)
{
	if(pHead == NULL)
	{
		printf("\n Your Stack Is Empty :");
		return ;
	}
	printf("\n\n");
	while(pHead != NULL)
	{
		printf("|%d|\n",pHead->iData);
		pHead=pHead->pNext;
	}
}
int Count(PNODE pHead)
{	
	int iCount =0;
	if(pHead == NULL)
	{
		printf("\n Your Stack Is Empty :");
		return iCount ;
	}
	while(pHead != NULL)
	{
		iCount ++;
		pHead=pHead->pNext;
	}
	return iCount;
}
