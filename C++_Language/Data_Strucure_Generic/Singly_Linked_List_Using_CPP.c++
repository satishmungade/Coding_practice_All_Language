#include<iostream>
using namespace std;
template<class T>
struct Node
{
	T iData;
	struct Node *pNext;
};

template<class T>
class SinglyLL
{
	private:
		struct Node<T> *pHead;
		int iSize;
	public:	
		SinglyLL()
		{
			pHead=NULL;
			iSize =0;
		}
	void InsertFirst(T);
	void InsertLast(T);
	void InsretAtPos(T,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	int SearchFirstOcc(T);
	int SearchLastOcc(T);
	int SearchAll(T);
	void Display();
	int CountNode();		
};
template<typename T>
void  SinglyLL<T>::InsertFirst(T iNo)
{
	struct Node<T> *NewNode=new Node<T>;
	NewNode ->iData=iNo;
	NewNode->pNext=NULL;
	if(pHead== NULL)
	{
		pHead=NewNode;
	}
	else
	{
		NewNode->pNext=pHead;
		pHead=NewNode;
	}
	iSize ++;
}

template<typename T>
void  SinglyLL<T>::InsertLast(T iNo)
{
	struct Node<T> *NewNode=new Node<T>;
	NewNode ->iData=iNo;
	NewNode->pNext=NULL;
	if(pHead== NULL)
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
	}
	iSize ++;
}
template<typename T>
void  SinglyLL<T>::InsretAtPos(T iNo,int iPos)
{
	int iCount=CountNode();
	struct Node<T> *NewNode=new Node<T>;

	NewNode->iData=iNo;
	NewNode->pNext=NULL;
	if(iPos < 1 || iPos > iCount + 1)
	{	
		return ;
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
		struct Node<T> *Temp = pHead;
		for(int iCnt = 1;iCnt < iPos -1; iCnt ++)
		{
			Temp=Temp->pNext;
		}
		NewNode->pNext=Temp->pNext;
		Temp->pNext=NewNode;

	}

	iSize ++;
}	
template<typename T>
void  SinglyLL<T>:: DeleteFirst()
{
	
    struct Node<T> *Temp = pHead;
	if(pHead != NULL)
	{
		pHead=pHead->pNext;
		delete(Temp);
	}
	iSize --;
}
template<typename T>
void  SinglyLL<T>::DeleteLast()
{
	
    struct Node<T> * Temp = pHead;
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
void  SinglyLL<T>::DeleteAtPos(int iPos)
{
	int iCount=0;
	struct Node<T> * Temp = pHead;
	struct Node<T> * Temp1 = pHead;
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
		for(int iCnt =1 ;iCnt < iPos -1;iCnt ++)
		{
			Temp=Temp->pNext;
		}
		Temp1=Temp->pNext;
		Temp->pNext=Temp1->pNext;
		delete(Temp1);

	}
	iSize --;
}

template<typename T>
void  SinglyLL<T>:: Display()
{
	struct Node<T> * Temp = pHead;
	cout<<"\n\t\t"<<endl;
	while(Temp != NULL)
	{
		cout<<"|"<<Temp->iData<<"|->";
		Temp=Temp->pNext;
	}
}

template<typename T>
int  SinglyLL<T>:: SearchFirstOcc(T iKey)
{	
	int iPos=0,iCount=0;
	struct Node<T> * Temp = pHead;
	while(Temp != NULL)
	{
		iPos ++;
		if(iKey ==Temp->iData)
		{
			iCount=iPos;
			break;
		}
		
	 Temp=Temp->pNext;
	}
	return iCount;
}

template<typename T>
int  SinglyLL<T>::SearchLastOcc(T iKey)
{
	int iPos=0,iCount=0;
	struct Node<T> *Temp = pHead;
	while(Temp != NULL)
	{
		iPos ++;
		if(Temp->iData==iKey)
		{
			iCount=iPos;
		}
		Temp=Temp->pNext;
	}
		return iCount;
}
template<typename T>
int  SinglyLL<T>::SearchAll(T iKey)
{
	int iCount=0;
	struct Node<T> *Temp = pHead;
	while(Temp != NULL)
	{
		if(Temp->iData==iKey)
		{
			iCount ++;
		}
		Temp=Temp->pNext;
	}

	return iCount;
}

template<typename T>
int  SinglyLL<T>::CountNode()
{
	return iSize;
}

template<typename T>
int MyMain(T)
{ 
	SinglyLL<T> obj;
	T iData;
    int iCounter,iCount,iDelData,iPosition,iChoice;
	

    while(1)
	{
		cout<<"\n\n \n 1.Insret_Element :\n 2.Delete_Element :\n 3.Search_Element :\n 4.count_list :\n 5.Display_list \n 0.Exit :"<<endl;
		cout<<"\n! Enter Your choice !:-\t";
		cin>>iChoice;
        switch(iChoice)
        {
            case 1: 
            while(1)
            {
                cout<<"\n\n\t1.Add At beginning list :\n\t2.Add At End :\n\t3.Add After possition :\n\t4.back :-\n";
                cout<<"\n\t! Enter Your choice for Insreting !:\t";
		        cin>>iChoice;
        		 switch(iChoice)
			    {
			    	case 1:

                    	cout<<"\n\n\tEnter the element to be insert First List \t:";
				   		cin>>iData;     
				        obj.InsertFirst(iData);
                        
                    break;
	            	case 2:
	            		cout<<"\n\n\tEnter the element to be insert Last List \t:";
				    	cin>>iData;     
	                    obj.InsertLast(iData);
                                                           
                    break;
                	case 3:
                		cout<<"\n\n\tEnter the element to be At-Pos List \t:";
				    	cin>>iData;
				    	cout<<"\n\tEnter the  possition of Node :\t";
			        	cin>>iPosition; 
					    obj.InsretAtPos(iData,iPosition);
                        
			        break;
                	case 4:
						break ;
			        default:
			                cout<<"\n\t! Your choice is Wrong !:\n"; 
                                        
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
                    cout<<"\n\t1.Delete First Element :\n\t2.Delete last Element :\n\t3.Delete AtpossitionElement\n\t4.Back:-\n";
                    cout<<"\n\t! Enter Your choice for Deleting !:\t";
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
							cout<<"\n\tEnter the position to be deleted :\t";
					    	cin>>iPosition;
                            obj.DeleteAtPos(iPosition);
                            break;
                        case 4:
                            break;

				        default:
							cout<<"! Your choice is Wrong !:\n"; 
                                        
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
                            iCount=obj.SearchAll(iData);
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
                        cout<<"\t! Total Number of Elements Count is !:"<<iCount<<endl;
					break; 
            		case  5:  
                		obj.Display();
               		 break;
                    case 0:
                    		cout<<" !! Thank-You for using Application !!"<<endl;
						return 0;
	        	default:
			    cout<<"! Your choice is Wrong !:"<<endl; 

         }   
      }
      return 0;
}
int main()
{

    int iChoice=0 ;
       cout<<"\n \t * GENERIC Singly LINKED LIST USING C++ TEMPLATE *"<<endl;
       cout<<"\n \t \t \t \t VERSION -1 "<<endl;
       
    while(1)
    {
    		cout<<" \n\t\t *** Which List You Want Create ***"<<endl;
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
