#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0


typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Root, int value)
{
    PNODE newn = NULL;
    PNODE temp = *Root;
    
    newn = (PNODE)malloc(sizeof(NODE));     // alocate memory
    
    newn->data = value;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Root == NULL)           // If our node is the first node then it becomes root.
    {
        *Root = newn;
    }
    else
    {
        while(1)    // unconditional loop       // for(;;) { }
        {
            if(temp->data == value)     // If element already present
            {
                printf("Element already present: Unable to insert\n");
                free(newn);
                break;
            }
            if(value < (temp->data))          // new element is small
            {
                if((temp->lchild) == NULL)
                {
                    temp->lchild = newn;    // insert the element
                    break;
                }
                temp = temp->lchild;
            }
            else if(value > (temp->data)) // new element is large
            {
                if((temp->rchild) == NULL)
                {
                    temp->rchild = newn;    // insert the element
                    break;
                }
                temp = temp->rchild;
            } // end of else if
        }   // end of while
    } // end of else
} // end of insert function


BOOL Search(PNODE Root, int value)
{
    while(Root != NULL)
    {
        if(Root ->data == value)
        {
            break;
        }
        if(value < Root->data)
        {
            Root = Root->lchild;
        }
        else
        {
            Root = Root->rchild;
        }
    }
    if(Root == NULL)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

void Inorder(PNODE Root)        // LDR
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\t",Root->data);
        Inorder(Root->rchild);
    }
}

void Preorder(PNODE Root)        // DLR
{
    if(Root != NULL)
    {
        printf("%d\t",Root->data);
        Preorder(Root->lchild);
        Preorder(Root->rchild);
    }
}

void Postorder(PNODE Root)        // LRD
{
    if(Root != NULL)
    {
        Postorder(Root->lchild);
        Postorder(Root->rchild);
        printf("%d\t",Root->data);
    }
}

int main()
{
    PNODE First = NULL;
    BOOL bRet = FALSE;
    
    int choice = 1;
    int no = 0;
    
    while(choice != 0)
    {
        printf("Enter your choice : \n");
        printf("1 : Insert into BST\n");
        printf("2 : Search the element in BST\n");
        printf("3 : Inorder display\n");
        printf("4 : Preorder display\n");
        printf("5 : Postorder display\n");
        printf("0 : Exit the applcatoion\n");
        
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter number to insert\n");
                scanf("%d",&no);
                Insert(&First,no);
                break;
                
            case 2:
                printf("Enter the element to search\n");
                scanf("%d",&no);
                bRet = Search(First, no);
                if(bRet == TRUE)
                {
                    printf("Element is there in BST\n");
                }
                else
                {
                    printf("There is no element in BST\n");
                }
                break;
                
            case 3:
                Inorder(First);
                break;
                
            case 4:
                Preorder(First);
                break;
                
            case 5:
                Postorder(First);
                break;
            
            case 0:
                printf("Thank you for using the application\n");
                break;
                
            default:
                printf("Wrong choice");
                break;
        }// End of swirtch
    }// End of while
    
    return 0;
} // End of main
