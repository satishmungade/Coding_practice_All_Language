#include<iostream>
using namespace std;
template<typename T>
class Node
{
	private:
	 	Node *pPrev;
		T iData;
		Node *pNext;
	public:
	Node()
	{
		pPrev=NULL;
		iData=0;
		pNext=NULL;
	}	
	template<typename T>
	friend class CirdoblyLL;
};
template<typename T>
class CirdoblyLL
{

	private:
		Node<T> *pHead;
		Node<T> *pTail;
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
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void DeleteAll();
	int CountNode();
	void Display();
};
template <typename T>
void CirdoblyLL<T> :: DeleteAll()
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
template<typename T>
void CirdoblyLL<T> :: InsertFirst(T iNo)
{
	Node<T> *NewNode=new Node<T>;
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
template<typename T>
void CirdoblyLL <T>:: InsertLast(T iNo)
{
	Node<T> *NewNode=new Node<T>;
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
template<typename T>
void CirdoblyLL <T>::InsertAtPos(T iNo,int iPos)
{
	int iCount=0;
	Node<T> *Temp=pHead;
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
		Node<T> *NewNode =new Node<T>;
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
template<typename T>
void CirdoblyLL <T>::DeleteFirst()
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
		Node<T> *Temp=pHead;
		pHead=Temp->pNext;
		pHead->pPrev=pTail;
		pTail->pNext=pHead;
		delete Temp;
		Temp=NULL;
	}
	iSize --;
}
template<typename T>
void CirdoblyLL<T> ::DeleteLast()
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
template<typename T>
void CirdoblyLL<T> ::DeleteAtPos(int iPos)
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
		Node <T>*Temp=pHead;
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
template<typename T>
void CirdoblyLL<T> :: Display()
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

template<typename T>
int CirdoblyLL<T> :: CountNode()
{
	return iSize;
}
template<typename T>
int MyMain(T)
{
	 CirdoblyLL <T>obj;
    int iCount=0,iPosition=0,iChoice=0;
    T iData=0;
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
int main()
{

    int iChoice=0 ;
       cout<<"\n\n \t * GENERIC Circular Doubly  LINKED LIST USING C++ TEMPLATE *"<<endl;
       cout<<"\n \t \t \t \t VERSION -3 "<<endl;
       
    while(1)
    {
    		cout<<" \n\n\t\t *** Which List You Want Create ***"<<endl;
            cout<<"\n[1]Integer :\n[2]Character :\n[3]Single Precision Floating Point :\n[4]Double precision Floating Point :\n[5]Exit :"<<endl;
            cout<<"\n \t Enter Your Choice :";
            cin>>iChoice;
            if(iChoice == 5)
            	break;
            switch(iChoice)
            {
                case 1:
                		cout<<"\n\t\t -- -- -- INTEGER -- -- --"<<endl;
                    	MyMain(10);
                        break;
                case 2:
                		cout<<"\n\t\t -- -- -- CHARACTER -- -- --"<<endl;
                        MyMain('A');
                        break ;
                case 3:
                		cout<<"\n\t\t -- -- -- FLOAT -- -- --"<<endl;
                        MyMain(10.1f);
                        break;
                case 4:
                		cout<<"\n\t\t -- -- -- DOUBLE -- -- --"<<endl;
                        MyMain(10.000);
                        break ;
                
                case 5:
                        exit(1);
                
                default :
                        cout<<"\n\t Your iChoice is wrong "<<endl; 
                           
            }
        }
    return 0;
}

