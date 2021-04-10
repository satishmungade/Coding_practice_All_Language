#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int value)
{
    PNODE newn = NULL;
    
    newn= (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;              // new
    
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;     // new
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |<=> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(struct Node * Head )  // int Count(PNODE Head)
{
    int iCnt = 0;
    
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    
    return iCnt;
}

//void InserLast(PPNODE Head, int value)
void InsertLast(struct Node ** Head, int value)
{
    // PNODe newn = NULL;
    struct Node * newn = NULL;
    // newn = (PNODE) malloc(sizeof(NODE));
    newn = (struct Node *)malloc(sizeof(struct Node));
    // PNODE temp = *Head;
    struct Node * temp = *Head;
    
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)       // type 2
        {
            temp = temp->next;
        }
        
        temp->next = newn;
        newn->prev = temp;              // new
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)           // Empty LL
    {
        return;
    }
    else if((*Head)->next  == NULL)     // Single node
    {
        free(*Head);
        *Head = NULL;
    }
    else                            // More than one node
    {
        (*Head) = (*Head) -> next;
          free((*Head) -> prev);
        (*Head) -> prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    
    if(*Head == NULL)           // Empty LL
    {
        return;
    }
    else if((*Head)->next  == NULL)     // Single node
    {
        free(*Head);
        *Head = NULL;
    }
    else                            // More than one node
    {
        while(temp->next->next != NULL)     // type 3
        {
            temp = temp->next;
        }
        
        free(temp->next);
        temp->next = NULL;
        
    }
}

void InsertAtPos(PPNODE Head, int value, int pos)
{
    int size = 0,i = 0;
    PNODE newn = NULL;
    PNODE temp = *Head;
    
    size = Count(*Head);
    
    if((pos < 1) || (pos > size+1))
    {
        return;
    }
    
    if(pos == 1)
    {
        InsertFirst(Head,value);
    }
    else if(pos == size + 1)
    {
        InsertLast(Head, value);
    }
    else
    {
        newn= (PNODE)malloc(sizeof(NODE));
        newn->data = value;
        newn->next = NULL;
        newn->prev = NULL;
        
        for(i = 1; i<pos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE Head , int pos)
{
    int size = 0, i = 0;
    PNODE temp = NULL;
    
    size = Count(*Head);
    
    if((pos < 1) || (pos > size))
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(Head);
    }
    else if(pos == size)
    {
        DeleteLast(Head);
    }
    else
    {
        temp = *Head;
        for(i = 1; i < pos-1;i++)
        {
            temp = temp->next;
        }
        temp->next =  temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}
void DisplayX(PNODE Head)
{
   if(Head == NULL)
    {
        return;
    }
    
    // travel till last node
    while(Head->next!= NULL)    // type 2
    {
        Head = Head->next;
    }
    
    // Travel in the reverse direction
    while(Head!= NULL)      // type 1
    {
        printf("|%d|<=> ",Head->data);
        Head = Head->prev;
    }
}

int main()
{
    PNODE First = NULL;
    int no = 0, iRet = 0;
    
    printf("\nEnter number : ");
    scanf("%d",&no);
    InsertFirst(&First, no);
    
    printf("\nEnter number : ");
    scanf("%d",&no);
    InsertFirst(&First, no);
    
    printf("\nEnter number : ");
    scanf("%d",&no);
    InsertFirst(&First, no);
    
    Display(First);
    
    iRet = Count(First);
    
    printf("Number of nodes are : %d\n",iRet);
    
    DisplayX(First);
    
    return 0;
}



























