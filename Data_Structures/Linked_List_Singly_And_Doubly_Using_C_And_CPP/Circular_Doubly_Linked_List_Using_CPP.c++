#include<iostream>
using namespace std;
struct Node
{
	struct Node *pPrev;
	int iData;
	struct Node *pNext;
};
typedef struct Node NODE;
typedef struct Node *PNODE;

class CirdoblyLL
{

	private:
		PNODE pHead;
		PNODE pTail;
		int iSize;
	public:

		CirdoblyLL()
		{
			pHead=NULL;
			pTail=NULL;
			iSize=0;
		}
		~CirdoblyLL()
		{
			
				DeleteAll();
			
		}
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPos(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void DeleteAll();
	int CountNode();
	void Display();
};
void CirdoblyLL :: DeleteAll()
{

        while( pTail != pHead )
        {
           pTail = pHead -> pPrev ;
           delete (pTail -> pNext);
            pTail -> pNext = pHead;
            pHead -> pPrev = pHead;
        }
            delete pTail;
            pTail=NULL;
            pHead =NULL;
            cout<<"\n \t Deleted All Sucessfully"<<endl;
}

void CirdoblyLL :: InsertFirst(int iNo)
{
	PNODE NewNode=new Node();
	NewNode->iData=iNo;
	NewNode->pNext=NULL;
	NewNode->pPrev=NULL;
	if((pHead == NULL) &&(pTail == NULL))
	{
		pHead=NewNode;
		pTail=NewNode;
	}
	else
	{
		NewNode->pNext=pHead;
		pHead->pPrev=NewNode;
		pHead=pHead->pPrev;
	}
	pTail->pNext=pHead;
	pHead->pPrev=pTail;
	iSize ++;
}
void CirdoblyLL :: InsertLast(int iNo)
{
	PNODE NewNode=new Node();
	NewNode->iData=iNo;
	NewNode->pNext=NULL;
	NewNode->pPrev=NULL;
	if((pHead == NULL) &&(pTail == NULL))
	{
		pHead=NewNode;
		pTail=NewNode;
	}
	else
	{
		pTail->pNext=NewNode;
		NewNode->pPrev=pTail;
		pTail=pTail->pNext;
	}
	pTail->pNext=pHead;
	pHead->pPrev=pTail;
	iSize ++;
}

void CirdoblyLL ::InsertAtPos(int iNo,int iPos)
{
	int iCount=0;
	PNODE Temp=pHead;
	iCount=CountNode();
	if((iPos < 1) || (iPos > iCount + 1))
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
		PNODE NewNode =new Node();
		NewNode->pNext=NULL;
		NewNode->pPrev=NULL;
		NewNode->iData=iNo;
		for (int iCnt= 1 ;iCnt < iPos -1; iCnt ++)
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
void CirdoblyLL ::DeleteFirst()
{
	if(pHead == NULL || pTail == NULL)
	{
		return;
	}
	if(pHead==pTail)
	{
		delete(pHead);
		pHead=NULL;
		pTail=NULL;
	}
	else
	{
		PNODE Temp=pHead;
		pHead=Temp->pNext;
		pHead->pPrev=pTail;
		pTail->pNext=pHead;
		delete Temp;
		Temp=NULL;
	}
	iSize --;
}
void CirdoblyLL ::DeleteLast()
{
	if(pHead == NULL || pTail == NULL)
	{
		return;
	}
	if(pHead==pTail)
	{
		delete(pHead);
		pHead=NULL;
		pTail=NULL;
	}
	else
	{
		pTail=pTail->pPrev;
		delete(pTail->pNext);
		pTail->pNext=pHead;
		pHead->pPrev=pTail;
	}
	iSize --;
}
void CirdoblyLL ::DeleteAtPos(int iPos)
{

	int iCount=0;
	
	iCount=CountNode();
	if(iPos < 1 || iPos > iCount)
	{
		cout<<"\n\n Ivalid position"<<endl;
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == iCount)
	{
		DeleteLast();
	}
	else
	{
		PNODE Temp=pHead;
		for(int iCnt = 1; iCnt < iPos -1; iCnt ++)
		{
			Temp=Temp->pNext;
		}
		Temp->pNext=Temp->pNext->pNext;
		delete(Temp->pNext->pPrev);
		Temp->pNext->pPrev=Temp;

	}
	iSize --;
}
void CirdoblyLL :: Display()
{
	if(pHead== NULL)
	{
		cout<<"\n\nList is Empty"<<endl;
		return;
	}
	cout<<"\n\n"<<endl;
	do{
		cout<<"<-|"<<pHead->iData<<"|->";
		pHead=pHead->pNext;
	}while(pHead !=pTail->pNext);
}
int CirdoblyLL :: CountNode()
{
	return iSize;
}
int main()
{
	cout<<"\n\n!! Circular Doubly Linked List Using C ++ !! \n";
	 CirdoblyLL  obj;
    int iCount=0,iPosition=0,iChoice=0,iData=0;
   	while(1)
        {
            cout<<"\n\n\n 1.Insret_Element :-\n 2.Delete_Element :-\n 3.Count_list :-\n 4.Display_list \n 0.Exit :-\n ";
        
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
                            
                            cout<<"\n\n\tEnter the element to be insert At-iPos Node \t:";
                            cin>>iData;
                            cout<<"\n\tEnter the  iPossition of Node :-\t";
                            cin>>iPosition;
                            obj.InsertAtPos(iData,iPosition);
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
                    	cout<<"\n\n\t1.Delete First Element :\n\t2.Delete last Element :\n\t3.Delete AtiPossitionElement\n\t4.Back:-\n";
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
                                    cout<<"\n\tEnter the iPosition to be deleted :-\t";
                                    cin>>iPosition;
                                    obj.DeleteAtPos(iPosition);
                                    break;
                                                                                         
                            case 4:
                                    break;

                            default:
        
                                    cout<<"\n!Your choice is Wrong !:-"; 
                                        
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
                        cout<<"\nThank-You For Using Application";
                        return 0;
                default :
                        cout<<"\n InValid Choice";
                    break;
                }
            }
            return 0;
}
