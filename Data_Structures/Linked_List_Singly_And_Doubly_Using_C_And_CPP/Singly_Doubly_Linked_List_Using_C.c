#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int iData;
    struct Node *pNext;
    struct Node *pPrev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE ppHead, int value)
{
    PNODE NewNode = NULL;
    
    NewNode= (PNODE)malloc(sizeof(NODE));
    NewNode->iData = value;
    NewNode->pNext = NULL;
    NewNode->pPrev = NULL;              // new
    
    if(*ppHead == NULL)
    {
        *ppHead = NewNode;
    }
    else
    {
        NewNode->pNext = *ppHead;
        (*ppHead)->pPrev = NewNode;     // new
        *ppHead = NewNode;
    }
}
void Display(PNODE pHead)
{
    while(pHead != NULL)
    {
        printf("| %d |<=> ",pHead->iData);
        pHead = pHead->pNext;
    }
    printf("NULL\n");
}

int CountNode(struct Node *pHead )  // int Count(PNODE ppHead)
{
    int iCount = 0;
    
    while(pHead != NULL)
    {
        iCount ++;
        pHead = pHead -> pNext;
    }
    
    return iCount;
}

void InsertLast(struct Node **ppHead, int value)
{
    PNODE NewNode = NULL;
    NewNode = (PNODE) malloc(sizeof(NODE));
    PNODE Temp = *ppHead;
    NewNode->iData = value;
    NewNode->pNext = NULL;
    NewNode->pPrev = NULL;
    if(*ppHead == NULL)
    {
        *ppHead = NewNode;
    }
    else
    {
        while(Temp->pNext != NULL)       // type 2
        {
            Temp = Temp->pNext;
        }
        Temp->pNext = NewNode;
        NewNode->pPrev = Temp;              // new
    }
}
void DeleteFirst(PPNODE ppHead)
{
    if(*ppHead == NULL)           // Empty LL
    {
        return;
    }
    else if((*ppHead)->pNext  == NULL)     // Single node
    {
        free(*ppHead);
        *ppHead = NULL;
    }
    else                            // More than one node
    {
        (*ppHead) = (*ppHead) -> pNext;
          free((*ppHead) -> pPrev);
        (*ppHead) -> pPrev = NULL;
    }
}

void DeleteLast(PPNODE ppHead)
{
    PNODE Temp = *ppHead;
    
    if(*ppHead == NULL)           // Empty LL
    {
        return;
    }
    else if((*ppHead)->pNext  == NULL)     // Single node
    {
        free(*ppHead);
        *ppHead = NULL;
    }
    else                            // More than one node
    {
        while(Temp->pNext->pNext != NULL)     // type 3
        {
            Temp = Temp->pNext;
        }
        
        free(Temp->pNext);
        Temp->pNext = NULL;
        
    }
}

void InsertAtiPos(PPNODE ppHead,int iPos,int value)
{
    int size = 0,i = 0;
    PNODE NewNode = NULL;
    PNODE Temp = *ppHead;
    
    size = CountNode(*ppHead);
    
    if((iPos < 1) || (iPos > size+1))
    {
        return;
    }
    
    if(iPos == 1)
    {
        InsertFirst(ppHead,value);
    }
    else if(iPos == size + 1)
    {
        InsertLast(ppHead, value);
    }
    else
    {
        NewNode= (PNODE)malloc(sizeof(NODE));
        NewNode->iData = value;
        NewNode->pNext = NULL;
        NewNode->pPrev = NULL;
        
        for(i = 1; i<iPos-1; i++)
        {
            Temp = Temp->pNext;
        }
        NewNode->pNext = Temp->pNext;
        Temp->pNext->pPrev = NewNode;
        
        Temp->pNext = NewNode;
        NewNode->pPrev = Temp;
    }
}

void DeleteAtPos(PPNODE ppHead , int iPos)
{
    int size = 0, i = 0;
    PNODE Temp = NULL;
    
    size = CountNode(*ppHead);
    
    if((iPos < 1) || (iPos > size))
    {
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(ppHead);
    }
    else if(iPos == size)
    {
        DeleteLast(ppHead);
    }
    else
    {
        Temp = *ppHead;
        for(i = 1; i < iPos-1;i++)
        {
            Temp = Temp->pNext;
        }
        Temp->pNext =  Temp->pNext->pNext;
        free(Temp->pNext->pPrev);
        Temp->pNext->pPrev = Temp;
    }
}
void DisplayRevers(PNODE pHead)
{
   if(pHead == NULL)
    {
        return;
    }
    
    // travel till last node
    while(pHead->pNext!= NULL)    // type 2
    {
        pHead = pHead->pNext;
    }
    
    // Travel in the reverse direction
    while(pHead!= NULL)      // type 1
    {
        printf("|%d|<=> ",pHead->iData);
        pHead = pHead->pPrev;
    }
}

int main()
{
    int iCount=0,iPosition=0,iChoice=0,iData=0;
    PNODE pFirst=NULL;
    
    while(1)
        {
            printf(" \n 1.Insret_Element :-\n 2.Delete_Element :-\n 3.count_list :-\n 4.Display_list \n 0.Exit :-\n " );
        
            printf("\n! Enter Your choice !:-\t");
            scanf("%d",&iChoice);
                               
            switch(iChoice)
            {
                case 1: 
                    while(1)
                    {
                        printf("\n\n\t1.Add At beginning list :-\n\t2.Add At End :-\n\t3.Add After iPossition :\n\t4.back :-\n");
                        printf("\n\t! Enter Your choice for Insreting !:-\t");
                        scanf("%d",&iChoice);
                        
                        switch(iChoice)
                        {
                        case 1:

                            printf("\n\n\tEnter the element to be insert First Node \t:");
                            scanf("%d",&iData);       
                            InsertFirst(&pFirst,iData);
                            break;
                        case 2:

                            printf("\n\n\tEnter the element to be insert Last Node \t:");
                            scanf("%d",&iData);   
                            InsertLast(&pFirst,iData);
                            break;
                        case 3:
                            printf("\n\tEnter the  iPossition of Node :-\t");
                            scanf("%d",&iPosition);
                            printf("\n\n\tEnter the element to be insert At-iPos Node \t:");
                            scanf("%d",&iData);
                            InsertAtiPos(&pFirst,iPosition,iData);
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
                        printf("\n\t1.Delete First Element :\n\t2.Delete last Element :\n\t3.Delete AtiPossitionElement\n\t4.Back:-\n");
                        printf("\n\n\t! Enter Your choice for Deleting !:\t");
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
                                    printf("\n\tEnter the iPosition to be deleted :-\t");
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
                        iCount=CountNode(pFirst);
                        printf("\nTotal Count of Node is :%d\n\n",iCount);
                      break;  
                case 4:
                        Display(pFirst);
                        DisplayRevers(pFirst);
                        break;
                case 0:
                        printf("\nThank-You For Using Application");
                        return 0;
                default :
                        printf("\n InValid Choice");
                    break;
                }
            }
            return 0;
}