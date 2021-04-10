#include<iostream>
using namespace std;
struct Node
{
	int iData;
	struct Node *pNext;
	struct Node *pPrev;
};
typedef struct Node NODE;
typedef struct Node *PNODE; 
/*class Node
{
	private:
		Node *pNext;
		Node *pPrev;
		int iData;
	Node()
	{
		pNext=NULL;
		pPrev=NULL;
		iData =0;
	}
	~Node()
	{}
	friend class DoubllyLL;
}; */

class DoubllyLL
{
	private :
		PNODE pHead;
		int iSize;
	public:
	DoubllyLL ();
	
	void InsertFirst(int);	
	void InsertLast(int);
	void InsertAtPos(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int CountNode();

};
DoubllyLL::DoubllyLL ()
{
	pHead =NULL;
	iSize=0;
}
void DoubllyLL :: InsertFirst(int iNo)
{
	PNODE NewNode=new Node;
	NewNode->iData=iNo;
	NewNode->pNext=NULL;
	NewNode->pPrev=NULL;
	if(pHead== NULL)
	{
		pHead=NewNode;
	}		
	else
	{
		NewNode->pNext=pHead;
		pHead->pPrev=NewNode;
		pHead=NewNode;
	}
	iSize ++;
}
void DoubllyLL::InsertLast(int iNo)
{
	PNODE NewNode =new Node;
	NewNode->iData=iNo;
	NewNode->pNext=NULL;
	NewNode->pPrev=NULL;
	if(pHead == NULL)
	{
		pHead=NewNode;
	}
	else
	{
		PNODE Temp=pHead;
		while(Temp->pNext != NULL)
		{
			Temp=Temp->pNext;
		}
		Temp->pNext=NewNode;
		NewNode->pPrev=Temp;
	}
	iSize ++;
}
void DoubllyLL ::InsertAtPos(int iPos,int iNo)
{
	int iCnt=0,iCount=0;
	PNODE Temp=pHead;
	
	iCount=CountNode();
	if((iPos < 1 || iPos > iCount + 1))
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(iNo);
	}
	else if(iPos == iCount + 1)
	{
		InsertLast(iNo);
	}
	else
	{
		PNODE NewNode=new Node;
		NewNode->iData=iNo;
		NewNode->pNext=NULL;
		NewNode->pPrev=NULL;
		for(iCnt =1 ; iCnt < iPos -1 ;iCnt ++)
		{
			Temp=Temp->pNext;
		}
		NewNode->pNext=Temp->pNext;
		Temp->pNext->pPrev=NewNode;
		Temp->pNext=NewNode;
		NewNode->pPrev=Temp;

	}
	iSize ++;
}
void DoubllyLL::DeleteFirst()
{
	if(pHead == NULL)
	{
		return;
	}	
	else if(pHead ->pNext == NULL)
	{
		delete(pHead);
		pHead=NULL;
	}
	else
	{
		pHead=pHead->pNext;
		delete(pHead->pPrev);
		pHead->pPrev=NULL;
	}
	iSize --;
}
void DoubllyLL :: DeleteLast()
{
	PNODE Temp=pHead;
	if(pHead == NULL)
	{
		return;
	}
	else if(pHead ->pNext == NULL)
	{
		delete(pHead);
		pHead=NULL;
	}
	else
	{
		while(Temp->pNext->pNext != NULL)
		{
			Temp=Temp->pNext;
		}
		delete(Temp->pNext);
		Temp->pNext=NULL;
	}
	iSize --;
}
void DoubllyLL :: DeleteAtPos(int iPos)
{
	int iCount=0;
	PNODE NewNode =NULL;
	PNODE Temp=pHead;
	iCount=CountNode();
	if(iPos < 1 || iPos > iCount )
	{
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == iSize)
	{
		DeleteLast();
	}
	else
	{
		for(int iCnt =1;iCnt <iPos -1; iCnt ++)
		{
			Temp=Temp->pNext;
		}
		Temp->pNext=Temp->pNext->pNext;
		delete(Temp->pNext->pPrev);
		Temp->pNext->pPrev=Temp;
	}
	iSize --;
}
int DoubllyLL :: CountNode()
{	
	return iSize;
}
void DoubllyLL :: Display()
{
		PNODE Temp=pHead;
		while(Temp != NULL)
		{
			cout<<Temp->iData<<"->";
			Temp=Temp->pNext;
		}
}

int main()
{
	DoubllyLL obj;
    int iCount=0,iPosition=0,iChoice=0,iData=0;
    cout<<"\n\n!! Doubly-Linked List Using C ++ !! \n";
   	while(1)
        {
            cout<<"\n 1.Insret_Element :-\n 2.Delete_Element :-\n 3.Count_list :-\n 4.Display_list \n 0.Exit :-\n ";
        
            cout<<"\n! Enter Your choice !:-\t";
            cin>>iChoice;
                               
            switch(iChoice)
            {
                case 1: 
                    while(1)
                    {
                        cout<<"\n\n\t1.Add At beginning list :-\n\t2.Add At End :-\n\t3.Add After iPossition :\n\t4.back :-\n";
                        cout<<"\n\t! Enter Your choice for Insreting !:-\t";
                        cin>>iChoice;
                        
                        switch(iChoice)
                        {
                        case 1:

                            cout<<"\n\n\tEnter the element to be insert First Node \t:";
                            cin>>iData;       
                            obj.InsertFirst(iData);
                            break;
                        case 2:

                            cout<<"\n\n\tEnter the element to be insert Last Node \t:";
                            cin>>iData;   
                            obj.InsertLast(iData);
                            break;
                        case 3:
                            cout<<"\n\tEnter the  iPossition of Node :-\t";
                            cin>>iPosition;
                            cout<<"\n\n\tEnter the element to be insert At-iPos Node \t:";
                            cin>>iData;
                            obj.InsertAtPos(iPosition,iData);
                            break;
                        
                        case 4:
                            break ;
                       
                        default:
                              cout<<"\n\t! Your choice is Wrong !:-\n"; 
                                        
                        }
                                                                               
                            if(iChoice == 4)
                            break;
                            obj.Display();
                        }
                    break;
                case 2:
                    while(1)
                    {
                     iCount=obj.CountNode();
                     if(iCount == 0)
                       	break;
                     else 
                    	cout<<"\n\t1.Delete First Element :\n\t2.Delete last Element :\n\t3.Delete AtiPossitionElement\n\t4.Back:-\n";
                        cout<<"\n\n\t! Enter Your choice for Deleting !:\t";
                        cin>>iChoice;
                         switch(iChoice)
                        {
                            case 1:
                                    obj.DeleteFirst();
                                    break;
                            case 2:
                                    obj.DeleteLast();
                                    break;
                            case 3:
                                    cout<<"\n\tEnter the iPosition to be deleted :\t";
                                    cin>>iPosition;
                                    obj.DeleteAtPos(iPosition);
                                    break;
                                                                                         
                            case 4:
                                    break;

                            default:
        
                                    cout<<"\n! Your choice is Wrong !:-"; 
                                        
                        }
                                                
                                if(iChoice == 4)
                                break;
                             obj.Display();
                    }
                                                                
                    break;
                case 3:
                        iCount=obj.CountNode();
                        cout<<"\n\nTotal Count of Node is :"<<iCount;
                      break;  
                case 4:
                        obj.Display();
                        
                        break;
                case 0:
                        cout<<" !! \n Thank-You For Using Application !!";
                        return 0;
                default :
                        cout<<"\n InValid Choice";
                    break;
                }
            }
            return 0;
}
