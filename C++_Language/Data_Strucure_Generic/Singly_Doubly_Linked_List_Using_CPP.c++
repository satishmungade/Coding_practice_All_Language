#include<iostream>
using namespace std;
template<class T>
struct Node
{
	T iData;
	struct Node *pNext;
	struct Node *pPrev;
};
template<class T>
class DoubllyLL
{
	private :
		struct Node<T> *pHead;
		int iSize;
	public:
	DoubllyLL ()
	{
		pHead =NULL;
		iSize=0;
	}
	
	void InsertFirst(T);	
	void InsertLast(T);
	void InsertAtPos(T,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int SearchFirstOcc(int iKey);
	int SearchLastOcc(int iKey);
	int SearchAllOcc(int iKey);
	int CountNode();

};
template<typename T>
void DoubllyLL<T> :: InsertFirst(T iNo)
{
	struct Node<T> *NewNode=new Node<T>;
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
template<typename T>
void DoubllyLL<T>::InsertLast(T iNo)
{
	
	struct Node<T> *NewNode=new Node<T>;
	NewNode->iData=iNo;
	NewNode->pNext=NULL;
	NewNode->pPrev=NULL;
	if(pHead == NULL)
	{
		pHead=NewNode;
	}
	else
	{
		struct Node<T> *Temp = pHead;
		while(Temp->pNext != NULL)
		{
			Temp=Temp->pNext;
		}
		Temp->pNext=NewNode;
		NewNode->pPrev=Temp;
	}
	iSize ++;
}
template<typename T>
void DoubllyLL <T>::InsertAtPos(T iPos,int iNo)
{
	int iCnt=0,iCount=0;
	struct Node<T> *Temp = pHead;
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
		
		struct Node<T> *NewNode=new Node<T>;
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
template<typename T>
void DoubllyLL<T>::DeleteFirst()
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
template<typename T>
void DoubllyLL <T>:: DeleteLast()
{
	struct Node<T> *Temp = pHead;
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
template<typename T>
void DoubllyLL <T>:: DeleteAtPos(int iPos)
{
	int iCount=0;
	struct Node<T> *Temp = pHead;
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
template<typename T>
int DoubllyLL <T>:: SearchFirstOcc(int iKey)
{	
	int iPos=0,iCount=0;
	struct Node<T> *Temp = pHead;
	while(Temp != NULL)
	{
		iCount ++;
		if(iKey==Temp->iData)
		{
			iPos=iCount;
			break;
		}
		Temp=Temp->pNext;
	}
	return iPos;
}
template<typename T>
int DoubllyLL <T>:: SearchLastOcc(int iKey)
{	
	int iPos=0,iCount=0;
	struct Node<T> *Temp = pHead;
	while(Temp != NULL)
	{
		iCount ++;
		if(iKey==Temp->iData)
		{
			iPos=iCount;
		}
		Temp=Temp->pNext;
	}
	return iPos;
}

template<typename T>
int DoubllyLL <T>:: SearchAllOcc(int iKey)
{	
	int iCount=0;

	struct Node<T> *Temp = pHead;
	while(Temp != NULL)
	{
		if(iKey==Temp->iData)
		{
			iCount ++;
		}
		Temp=Temp->pNext;
	}
	return iCount;
}
template<typename T>
int DoubllyLL <T>:: CountNode()
{	
	return iSize;
}
template<typename T>
void DoubllyLL<T> :: Display()
{
	struct Node<T> *Temp = pHead;
	while(Temp != NULL)
	{
		cout<<"| "<<Temp->iData<<" | ->";
		Temp=Temp->pNext;
	}
}

template<typename T>
int MyMain(T)
{
	DoubllyLL<T> obj;
    int iCount=0,iPosition=0,iChoice=0;
    T iData=0;
   	while(1)
        {
            cout<<"\n\n\n 1.Insret_Element :-\n 2.Delete_Element :-\n 3.Search_Element :-\n 4.Count_Element :-\n 5.Display_list \n 0.Back :-\n ";
        
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
			 		while(1) 
             		{ 	 
             		iCount=obj.CountNode();
                 	if(iCount == 0)
                    	 break;					    
                 	else
                
                    	cout<<"\n\n\n\t 1.Search First occurrence list :\n\t 2.Search Last occurrence list :\n\t 3.Search All_list : \n\t 4.Back :-\n";
                  		cout<<"\n\t! Enter Your choice For Searching !:\t";
	                	cin>>iChoice;
                    	switch(iChoice)
         				{
                        	case 1:
							cout<<"\n\t\t Enter the element which want to search occurrence first \t:";
							cin>>iData;
							iCount=obj.SearchFirstOcc(iData);
							if(iCount == 0)
								cout<<"\n\n\t\t Data Not Present in List"<<endl;
							else	
								cout<<"\n\n\t\t Data First found At position :"<<iCount<<endl;
							break;
                            
							case 2:
							cout<<"\n\n\t\t Enter the element which want to search occurrence last \t:";
							cin>>iData;
							iCount=obj.SearchLastOcc(iData);
							if(iCount == 0)
								cout<<"\n\n\t\t Data  Not Present in List :"<<endl;
							else	
								cout<<"\n\n\t\t Data Last found At position :"<<iCount<<endl;
                            break;
							 
                       		case 3:
                            cout<<"\n\t\t Enter the element to search All \t:";
                            cin>>iData;
                            iCount=obj.SearchAllOcc(iData);
                            if(iCount == 0)
								cout<<"\n\t\t Data Not Present in List :"<<endl;
							else
                          		cout<<"\n\t\tData Occurrence given number is:"<<iCount<<endl;
                    		break;
							case 4:
								break;

                         	default:
						   			cout<<"! Your choice is Wrong !"<<endl; 
                         }
            			 obj.Display();
                             if(iChoice == 4)
                                    break;
	                 }
	                   break;
                case 4:
                        iCount=obj.CountNode();
                        cout<<"\n\nTotal Count of Node is :"<<iCount;
                      break;  
                case 5:
                        obj.Display();
                        
                        break;
                case 0:
                        cout<<"\n\n\t!! Thank-You For Using Application !!\n\n";
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
       cout<<"\n \t * GENERIC Doublly LINKED LIST USING C++ TEMPLATE *"<<endl;
       cout<<"\n \t \t \t \t VERSION -2 "<<endl;
       
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
