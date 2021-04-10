#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct Node
{
	int iData;
	struct Node *pNext;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE,int);
void InsertLast(PPNODE,int);
void InsertAtPos(PPNODE,int,int);
void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void DeleteAtPos(PPNODE,int);
void DisplayList(PNODE);
int SearchFirstOcc(PNODE ,int);
int SearchLastOcc(PNODE ,int);
int SearchAll(PNODE,int);
int CountNode(PNODE);

void InsertFirst(PPNODE pHead,int iNo)
{
	PNODE NewNode=NULL;
	NewNode=(PNODE)malloc(sizeof(NODE));
	NewNode->pNext=NULL;
	NewNode->iData=iNo;
	if(*pHead == NULL) // If linked list is empty
	{
		*pHead=NewNode;
	}
	else // If linked list contains atleast one node
	{
		NewNode->pNext=*pHead;
		*pHead=NewNode;
	}
}

void InsertLast(PPNODE pHead,int iNo)
{
	PNODE NewNode=NULL;
	PNODE Temp;
	NewNode=(PNODE)malloc(sizeof(NODE));
	NewNode->pNext=NULL;
	NewNode->iData=iNo;
	if(*pHead == NULL) // Empty linked list
	{
		*pHead=NewNode;
	}
	else  				// Linked list contains atleadst one node	
	{	
						// travel till the last node

		Temp=*pHead; 	// Store the address of first node
		while(Temp ->pNext != NULL)
		{
			Temp=Temp->pNext;
		}
		Temp->pNext=NewNode;

	}
}

void InsertAtPos(PPNODE pHead,int iNo,int iPos)
{
	int iSize=CountNode(*pHead);
	int iCnt=0;
	PNODE NewNode=NULL;
	PNODE Temp=*pHead;
	NewNode=(PNODE)malloc(sizeof(NODE));
	NewNode->pNext=NULL;
	NewNode->iData=iNo;
	
	if(iPos < 1 && iPos > iSize +1) //If Position invalid Asel tr
	{
		return;
	}
	else if(iPos == 1) //If First Position
	{
		InsertFirst(pHead,iNo);
	}
	else if(iPos == iSize +1) //Last Position
	{
		InsertLast(pHead,iNo);
	}
	else
	{
		for(iCnt =1 ;iCnt < iPos -1; iCnt ++) //IF any middle Position
		{
			Temp=Temp->pNext;
		}
		NewNode->pNext=Temp->pNext;
		Temp->pNext=NewNode;
	}
}

void DeleteFirst(PPNODE pHead)
{
	PNODE Temp=*pHead;
	if(*pHead != NULL)
	{
		*pHead=(*pHead)->pNext;
		free(Temp);
	}
}

void DeleteLast(PPNODE pHead)
{
    PNODE Temp = *pHead;
    
    if(*pHead == NULL)   // If linked list is empty
    {
        return;
    }
    else if((*pHead) -> pNext == NULL)    // If linked list contains single node
    {
        free(*pHead);
        *pHead = NULL;
    }
    else    // If linked list contains more that one node
    {
            while(Temp->pNext->pNext != NULL)
            {
                Temp = Temp->pNext;
            }
        
            free(Temp->pNext);
            Temp->pNext = NULL;
    }
}
void DeleteAtPos(PPNODE pHead,int iPos)
{
	int istat,iEnd;
	PNODE Temp=*pHead;
	PNODE Temp1=*pHead;
	int iSize=CountNode(*pHead);
	if((iPos < 1) || (iPos > iSize))
	{
		return;
	}
	if(iPos == 1)  //if First Node
	{
		DeleteFirst(pHead);
	}
	else if(iPos == iSize)  //If Last Node
	{
		DeleteLast(pHead);
	}
	else   //if Middel Node
	{
		for(istat =1 ;istat < iPos -1 ;istat ++) //position -1 paret jaa
		{
			Temp =Temp ->pNext;         
		}
		
		Temp1=Temp->pNext;
		Temp->pNext=Temp1->pNext;
		free(Temp1); 
	}
}
int SearchFirstOcc(PNODE pHead ,int iKey)
{
	int iPos=0,iCount=0;
	while(pHead != NULL)
	{
		iPos ++;
		
		if(iKey == pHead ->iData)
		{
			iCount =iPos;
			break;
		}
		pHead=pHead->pNext;
		
	}
		return iCount;	
}

int SearchLastOcc(PNODE pHead ,int iKey)
{	
	int iPos=0,iCount=0;
	while(pHead != NULL )
	{
		iPos ++;
		if(pHead ->iData == iKey)
		{		
			iCount=iPos;
		}
		
		pHead=pHead->pNext;
	}
	return iCount;
}

int SearchAll(PNODE pHead ,int iKey)
{
	int iCount=0;
	while(pHead != NULL)
	{
		if(iKey == pHead ->iData)
		{
			iCount ++ ;
		}
		pHead=pHead->pNext;
		
	}
		return iCount ;	
}

int CountNode(PNODE pHead)
{
	int iCount=0;
	while(pHead !=NULL)
	{
		iCount ++;
		pHead=pHead->pNext;
	}
	return iCount;
}

void Display(PNODE pHead)
{	
	if(pHead == NULL)
	{
		printf("\nYour Linked List Is Empty");
		return;
	}
	printf("\n\n\t");
	while(pHead !=NULL)
	{
		printf("->|%d|",pHead->iData);
		pHead=pHead->pNext;
	}
}

int main()
{ 

    int iCounter,iCount,iDelData,iData,iPosition,iChoice;
	 PNODE pFirst = NULL;
	 printf("\n!! Singly Linked List Using C !! \n");
    while(1)
	{
		printf(" \n\n 1.Insret_Element :-\n 2.Delete_Element :-\n 3.Search_Element :-\n 4.count_list :-\n 5.Display_list \n 0.Exit :-\n " );
		printf("\n! Enter Your choice !:-\t");
		scanf("%d",&iChoice);
        switch(iChoice)
        {
            case 1: 
            while(1)
            {
                printf("\n\n\t1.Add At beginning list :-\n\t2.Add At End :-\n\t3.Add After possition :\n\t4.back :-\n");
                printf("\n\t! Enter Your choice for Insreting !:-\t");
		        scanf("%d",&iChoice);
                if(iChoice ==3)
                {
                    printf("\n\tEnter the  possition of Node :-\t");
			        scanf("%d",&iPosition);    
                    if(iPosition<=0 ||iPosition>(CountNode(pFirst)+1))	
       		        {
					    printf("\n\n\t Your Position is invalid :\n");
							continue;
					}  
                }
                if(iChoice<=3) 
                {  
                    printf("\n\n\tEnter the element to be insert First List \t:");
				        scanf("%d",&iData);            
                }        
                switch(iChoice)
			    {
			    	case 1:
				        InsertFirst(&pFirst,iData);
                        printf("\n\t!!Element to be inserted First position !!\n");
                    break;
	            	case 2:
	                    InsertLast(&pFirst,iData);
                        printf("\n\t!!Element to be inserted Last Position!:\n");                                     
                    break;
                	case 3:
					    InsertAtPos(&pFirst,iData,iPosition);
                        printf("\n\tElement to be inserted At-Position %d \t ",iPosition);
			        break;
                	case 4:
						break ;
			        default:
			                printf("\n\t! Your choice is Wrong !:-\n"); 
                                        
                }
                                                               
                        if(iChoice == 4)
                        	break;
 
                        Display(pFirst);
        }
        break;
        case 2:
            while(1)
                {
					if(pFirst == NULL)
                    {                                        
                        printf("\n\n! Your List is Empty !");                               
                        break; 
                    }    
                    printf("\n\t1.Delete First Element :\n\t2.Delete last Element :\n\t3.Delete AtpossitionElement\n\t4.Back:-\n");
                    printf("\n\t! Enter Your choice for Deleting !:-\t");
					scanf("%d",&iChoice);
                    switch(iChoice)
			        {
                        case 1:
					        DeleteFirst(&pFirst);
        					break;
				    	case 2:
							DeleteLast(&pFirst);
                            break;
						case 3:
							printf("\n\tEnter the position to be deleted :-\t");
					    	scanf("%d",&iPosition);
                            DeleteAtPos(&pFirst,iPosition);
                            break;
                        case 4:
                            break;

				        default:
							printf("! Your choice is Wrong !:-\n"); 
                                        
                    }
                    if(iChoice == 4)
                        break;
                    Display(pFirst);
                }
                                                                
                break;
               case 3:
			 while(1) 
             { 
                if(pFirst == NULL)
                {
                    printf("\n\t! Your List is Empty pleses Insert First Data Than search your Data...! :-\n\n");
                    break; 
                } 
                    printf("\n\n\n\t 1.Search First occurrence list :-\n\t 2.Search Last occurrence list :-\n\t 3.Search All_list :- \n\t 4.Back :-\n");
                  	printf("\n\t! Enter Your choice For Searching !:-\t");
	                scanf("%d",&iChoice);
                    switch(iChoice)
         			{
                        case 1:
							printf("\n\t\t Enter the element which want to search occurrence first \t:");
							scanf("%d",&iData);
							iCount=SearchFirstOcc(pFirst,iData);
							if(iCount == 0)
								printf("\n\t\t Data %d  Not Present in List :\n",iData);
							else	
								printf("\n\t\t Data %d First found At position :%d\n",iData,iCount);
							break;
                            
						case 2:
							printf("\n\t\t Enter the element which want to search occurrence last \t:");
							scanf("%d",&iData);
							iCount=SearchLastOcc(pFirst,iData);
							if(iCount == 0)
								printf("\n\t\t Data %d Not Present in List :\n",iData);
							else	
								printf("\n\t\t Data %d Last found At position :%d\n",iData,iCount);
                            break;
							 
                       case 3:
                            printf("\n\t\t Enter the element to search All \t:");
                            scanf("%d",&iData);
                            iCount=SearchAll(pFirst,iData);
                            if(iCount == 0)
								printf("\n\t\t Data %d Not Present in List :%d\n",iData,iCount);
							else
                          		printf("\n\t\tData %d Occurrence given number is  :%d \n",iData,iCount);
                             break;
          
                        case 4:

	                            break;

                         default:
						   			printf("! Your choice is Wrong !:-\n"); 
                         }
            			 Display(pFirst);
                             if(iChoice == 4)
                                    break;
	                 }
	                    break;
                    case 4:                 
						iCount=CountNode(pFirst);
                        printf("\t! Total Number of Elements Count is !:%d\n",iCount);
					break; 
            		case  5:  
                		Display(pFirst);
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
