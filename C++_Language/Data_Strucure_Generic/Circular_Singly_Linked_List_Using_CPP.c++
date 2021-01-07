#include<iostream>
using namespace std;
template<typename T>
class Node
{
	private:
		T iData;
		Node *pNext;
	public:
	Node()
	{
		iData=0;
		pNext=NULL;
	}	
	template<typename T>
	friend class CirsinglyLL;
};
template<typename T>
class CirsinglyLL
{
	private:
		Node<T> *pHead;
		Node<T> *pTail;
		int iSize ;
	public:
		CirsinglyLL()
		{
			pHead=NULL;
			pTail=NULL;
			iSize =0;
		}
		~CirsinglyLL(){}
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	int CountNode();
	void Display();

};
template<typename T>
void CirsinglyLL<T> :: InsertFirst(T iNo)
{
	Node<T> *NewNode=new Node<T>;
	NewNode ->iData=iNo;
	NewNode->pNext=NULL;
	if(pHead == NULL && pTail == NULL)
	{
		pHead=NewNode;
		pTail =NewNode;

	}
	else
	{
		NewNode->pNext=pHead;
		pHead=NewNode;
	}
	pTail->pNext=pHead;
	iSize ++;
}
template<typename T>
void CirsinglyLL<T> :: InsertLast(T iNo)
{
	Node<T> *NewNode=new Node<T>;
	NewNode ->iData=iNo;
	NewNode->pNext=NULL;
	if(pHead == NULL && pTail == NULL)
	{
		pHead=NewNode;
		pTail =NewNode;

	}
	else
	{
		pTail->pNext=NewNode;
		pTail=NewNode;
	}
	pTail->pNext=pHead;
	iSize ++;
}
template<typename T>
void CirsinglyLL <T>:: InsertAtPos(T iNo,int iPos)
{
	int iCnt=0, iCount=0;
	iCount=CountNode();
	Node<T> *Temp=pHead;
	if(iPos < 1 || iPos > iCount + 1)
	{
		cout<<"Invalid possition"<<endl;
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(iNo);
	}
	else if(iPos == iCount +1)
	{
		InsertLast(iNo);
	}
	else
	{
		Node <T>*NewNode =new Node<T>;
		NewNode->iData=iNo;
		NewNode->pNext=NULL;
		for(iCnt =1; iCnt < iPos -1; iCnt ++)
		{
			Temp=Temp->pNext;
		}
		NewNode->pNext=Temp->pNext;
		Temp->pNext=NewNode;
	}	
	iSize ++;
}
template<typename T>
void CirsinglyLL <T>:: DeleteFirst()
{
	if(pHead == NULL && pTail == NULL)
	{
		return;
	}
	if(pHead == pTail)
	{
		delete(pHead);
		pHead=NULL;
		pTail=NULL;
		return;
	}
	else
	{
		pHead=pHead->pNext;
		delete(pTail->pNext);
		pTail->pNext=pHead;
	}
	iSize --;

}
template<typename T>
void CirsinglyLL <T>:: DeleteLast()
{
	Node<T> *Temp=pHead;
	if(pHead == NULL && pTail == NULL)
	{
		return;
	}
	if(pHead == pTail)
	{
		delete(pHead);
		pHead=NULL;
		pTail=NULL;
		return;
	}
	else
	{
		while(Temp->pNext != pTail)
		{
			Temp=Temp->pNext;
		}
		delete(pTail);
		pTail=Temp;
		pTail->pNext=pHead;
	}
	iSize --;
}
template<typename T>
void CirsinglyLL <T>:: DeleteAtPos(int iPos)
{
	Node<T> *Temp=pHead;
	Node<T> *Temp1=NULL;
	int iCnt=0,iCount=0;
	iCount=CountNode();
	if(iPos < 1 || iPos > iCount)
	{
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
		for(iCnt =1 ;iCnt < iPos -1; iCnt ++)
		{
			Temp =Temp->pNext;
		}
		Temp1=Temp->pNext;
		Temp->pNext=Temp1->pNext;
		delete(Temp1);
	}
	iSize --;

}
template<typename T> 
int CirsinglyLL <T>:: CountNode()
{

	return iSize;
}
template<typename T>
void CirsinglyLL <T>:: Display()
{
	if(pHead== NULL)
	{
		cout<<"\n List is Empty"<<endl;
	}
	cout<<"\n\n";
	do{
		cout<<"<-|"<<pHead->iData<<"|->";
		pHead=pHead->pNext;
	}while(pHead!= pTail->pNext );
}

template<typename T>
int MyMain(T)
{
	
	CirsinglyLL <T>obj;
    int iCount=0,iPosition=0,iChoice=0;
    T iData=0;
   	while(1)
        {
            cout<<"\n\n\n 1.Insret_Element :-\n 2.Delete_Element :-\n 3.Count_list :-\n 4.Display_list \n 0.Back :-\n ";
        
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
       cout<<"\n \t * GENERIC Circular Singly LINKED LIST USING C++ TEMPLATE *"<<endl;
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
