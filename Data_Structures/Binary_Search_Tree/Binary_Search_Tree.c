#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int iData;
	struct Node *LeftChild;
	struct Node *RightChild;
};
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node** PPNODE;

void InsertNode(PPNODE Root,int iNo)
{
	PNODE NewNode =NULL;
	PNODE Temp=*Root;
	NewNode =(PNODE)malloc(sizeof(NODE));
	NewNode->iData=iNo;
	NewNode->LeftChild=NULL;
	NewNode->RightChild=NULL;
	if(*Root == NULL)
	{
		*Root=NewNode;
	}
	else
	{
		while(1)
		{
			if(Temp->iData == iNo)
			{
				printf("\n Element Already is Present :Unable to Insert :\n");
				free(NewNode);
				NewNode=NULL;
				break;
			}
			if(iNo < (Temp->iData))
			{
				if((Temp ->LeftChild)==NULL)
				{
					Temp->LeftChild=NewNode;
					break;
				}
				Temp=Temp->LeftChild;
			}
			else if(iNo >(Temp->iData))
			{
				if((Temp->RightChild)==NULL)
				{
					Temp->RightChild=NewNode;
					break;
				}
				Temp=Temp->RightChild;					}
			}
		}
}	
void INorder(PNODE Root)
{
	if(Root != NULL)
	{
		INorder(Root ->LeftChild);
		printf("\t %d\t",Root->iData);
		INorder(Root->RightChild);
	}
}
void Preorder(PNODE Root)
{
	if(Root != NULL)
	{
		printf("\t %d\t",Root->iData);
		Preorder(Root ->LeftChild);
		Preorder(Root->RightChild);
	}
}
void Postorder(PNODE Root)
{
	
	if(Root != NULL)
	{
		Postorder(Root ->LeftChild);
		Postorder(Root->RightChild);
		printf("\t %d\t",Root->iData);
	}
}

int main()
{
	int iNo=0,iKey=0,iChoice=0;
	PNODE Root=NULL;
	while(1)
	{
		printf("\n 1.InsertNode :\n 2.SearchNode :\n 3.INorderDisplay :\n 4.PreorderDisplay :\n 5.Postorder :\n 0.Exit\n ");
		printf("\n Enter Your Choice :");
		scanf("%d",&iChoice);
		switch(iChoice)
		{
			case 1:
				printf("\n\t\t Enter a Element To Insert :");
				scanf("%d",&iNo);
				InsertNode(&Root,iNo);
				break;
			case 2:
				printf("\n\t Enter a Element SearchData:");
				scanf("%d",&iKey);
				//SearchNode(Root,iKey);
				break;
			case 3:
				INorder(Root);	
				break;

			case 4:
				Preorder(Root);
				break;

			case 5:
				Postorder(Root);
				break;
			case 0:
                    printf("\n\t !! Thank-You for using Application !!");
					return 0;
	        default:

			    printf("! Your choice is Wrong !:-\n"); 

		}

	}
	return 0;
}