#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int iData;
    struct Node *pNext;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE,PPNODE,int);
void Display(PNODE,PNODE);
void InsertLast(PPNODE,PPNODE,int);
void InsertAtPos(PPNODE,PPNODE,int,int);
int CountNode(PNODE,PNODE);

void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(PPNODE,PPNODE);
void DeleteAtPos(PPNODE,PPNODE,int);
int main()
{
    int iCount=0,iPosition=0,iChoice=0,iData=0;
    PNODE pFirst=NULL;
    PNODE pLast=NULL;
    while(1)
        {
            printf(" \n 1.Insret_Element :-\n 2.Delete_Element :-\n 3.count_list :-\n 4.Display_list \n 5.Exit :-\n " );
        
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
                        
                        switch(iChoice)
                        {
                        case 1:

                            printf("\n\n\tEnter the element to be insert First Node \t:");
                            scanf("%d",&iData);       
                            InsertFirst(&pFirst,&pLast,iData);
                            break;
                        case 2:

                            printf("\n\n\tEnter the element to be insert Last Node \t:");
                            scanf("%d",&iData);   
                            InsertLast(&pFirst,&pLast,iData);
                            break;
                        case 3:
                            printf("\n\tEnter the  possition of Node :-\t");
                            scanf("%d",&iPosition);
                            printf("\n\n\tEnter the element to be insert At-Pos Node \t:");
                            scanf("%d",&iData);
                            InsertAtPos(&pFirst,&pLast,iPosition,iData);
                            break;
                        
                        case 4:
                            break ;
                       
                        default:
                              printf("\n\t! Your choice is Wrong !:-\n"); 
                                        
                        }
                                                                               
                            if(iChoice == 4)
                            break;
                            Display(pFirst,pLast);
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
                        printf("\n\n\t! Enter Your choice for Deleting !:\t");
                        scanf("%d",&iChoice);
                         switch(iChoice)
                        {
                            case 1:
                                    DeleteFirst(&pFirst,&pLast);
                                    break;
                            case 2:
                                    DeleteLast(&pFirst,&pLast);
                                    break;
                            case 3:
                                    printf("\n\tEnter the position to be deleted :-\t");
                                    scanf("%d",&iPosition);
                                    DeleteAtPos(&pFirst,&pLast,iPosition);
                                    break;
                                                                                         
                            case 4:
                                    break;

                            default:
        
                                    printf("! Your choice is Wrong !:-\n"); 
                                        
                        }
                                                
                                if(iChoice == 4)
                                break;
                             Display(pFirst,pLast);
                    }
                                                                
                    break;
                case 3:
                        iCount=CountNode(pFirst,pLast);
                        printf("\nTotal Count of Node is :%d\n\n",iCount);
                      break;  
                case 4:
                        Display(pFirst,pLast);
                        break;
                case 5:
                        exit(0);
                default :
                        printf("\n InValid Choice");
                    break;
                }
            }
            return 0;
}               
void InsertFirst(PPNODE ppHead,PPNODE ppTail,int iNo)
{
    PNODE NewNode =NULL;
    NewNode =(PNODE)malloc(sizeof(NODE));
    NewNode->iData=iNo;
    NewNode->pNext=NULL;
    if((*ppHead == NULL)&&(*ppTail== NULL))
    {
        *ppHead=NewNode;
        *ppTail=NewNode;
    }
    else
    {
        NewNode->pNext=*ppHead;
        *ppHead=NewNode;
    }   
    (*ppTail)->pNext=*ppHead;
    
}
void InsertLast(PPNODE ppHead,PPNODE ppTail,int iNo)
{
    PNODE NewNode =NULL;
    NewNode =(PNODE)malloc(sizeof(NODE));
    NewNode->iData=iNo;
    NewNode->pNext=NULL;
    if((*ppHead == NULL)&&(*ppTail== NULL))
    {
        *ppHead=NewNode;
        *ppTail=NewNode;
    }
    else
    {
        (*ppTail)->pNext=NewNode;
        *ppTail=(*ppTail)->pNext;
    }
    (*ppTail)->pNext=*ppHead;

}
void InsertAtPos(PPNODE ppHead,PPNODE ppTail,int iPos,int iNo)
{

    PNODE Temp=NULL;
    int iCnt=0,iSize=CountNode(*ppHead,*ppTail);
    if(iPos < 1 || iPos > iSize + 1)
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(ppHead,ppTail,iNo);
    }
    else if(iPos == iSize + 1)
    {
        InsertLast(ppHead,ppTail,iNo);
    }
    else
    {
        PNODE NewNode =NULL;
        NewNode =(PNODE)malloc(sizeof(NODE));
        NewNode->iData=iNo;
        NewNode->pNext=NULL;
        Temp=*ppHead;
        for(iCnt =1  ; iCnt < iPos -1 ;iCnt ++)
        {
            Temp=Temp->pNext;
        }
        NewNode->pNext=Temp->pNext;
        (*ppTail)->pNext=NewNode;
        Temp->pNext=NewNode;
        (*ppTail)->pNext=*ppHead;
    }
}
void DeleteFirst(PPNODE ppHead,PPNODE ppTail)
{
    PNODE Temp=NULL;
    if(NULL == *ppHead)
    {
        return;
    }
    else if(*ppHead == *ppTail)
    {
        (*ppHead)->pNext=NULL;
        free(*ppHead);
        *ppHead=*ppTail=NULL;
    }
    else
    {
        Temp=*ppHead;
        *ppHead=Temp->pNext;
        Temp->pNext=NULL;

        (*ppTail)->pNext=*ppHead;
        free(Temp);
        Temp=NULL;

    }
}

void DeleteLast(PPNODE ppHead,PPNODE ppTail)
{
    PNODE Temp=NULL;
    if(NULL == *ppHead)
    {
        return;
    }
    else if(*ppHead == *ppTail)
    {
        (*ppHead)->pNext=NULL;
        free(*ppHead);
        *ppHead=*ppTail=NULL;
    }   
    else
    {
        Temp =*ppHead;
        while(Temp ->pNext != *ppTail)
        {
            Temp=Temp->pNext;
        }
        (*ppTail)=Temp;
        Temp=(*ppTail)->pNext;
        Temp->pNext=NULL;
        (*ppTail)->pNext=*ppHead;
        free(Temp);
        Temp=NULL;
    }   
}
void DeleteAtPos(PPNODE ppHead,PPNODE ppTail,int iPos)
{
    PNODE Temp=*ppHead;
    PNODE Temp1=*ppTail;
    
    int iCnt=0,iSize=CountNode(*ppHead,*ppTail);
    if(iPos < 1 && iPos < iSize )
    {
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(ppHead,ppTail);
    }
    else if(iPos == iSize)
    {
        DeleteLast(ppHead,ppTail);
    }
    else
    {
        for(iCnt =1 ;iCnt < iPos -1;iCnt ++)
        {
            Temp=Temp->pNext;
        }
        Temp1=Temp->pNext;
        Temp->pNext=Temp1->pNext;
        free(Temp1);
        Temp1=NULL;
    }

}


int CountNode(PNODE pHead,PNODE pTail)
{
    int iCount=0;
    if(pHead== NULL)
    {
        return 0;
    }
    do
    {
        iCount ++;
        pHead=pHead->pNext;
    }while(pHead !=pTail->pNext);
    return iCount;
}
void Display(PNODE ppHead,PNODE ppTail)
{
    if((ppHead == NULL)&&(ppTail == NULL))
    {
        return;
    }
    printf("\n\n");
    do
    {
        printf("|%d|->",ppHead->iData);
        ppHead=ppHead->pNext;
    }while(ppHead !=ppTail ->pNext);
    printf("\n\n");
}