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
		~Node()
		{

		}
		template<typename T>
		friend class Stack;

};
template<typename T>
class Stack
{
	private:
		Node<T> *pFirst;
	public:
		Stack()
		{
			pFirst=NULL;
		}	
		~Stack()
		{

		}
	void Push(T);
	T Pop();
	void Display();
	int Count();	
};

template<typename T>
int MyMain(T)
{
	Stack<T> Obj;
	int iCount=0,iChoice=0;
	T iNo=0,iDelData=0;
	while(1)
	{
		cout<<"\n\n 1.Push\n 2.Pop\n 3.Count\n 4.Display\n 0.Exit";
		cout<<"\nEnter Your Choice \t:";
		cin>>iChoice;
		switch(iChoice)
		{
			case 1:
					cout<<"\nEnter A Element to Push \t:";
					cin>>iNo;
					Obj.Push(iNo);
					Obj.Display();
				break;

			case 2:
					iDelData=Obj.Pop();
					cout<<"\n\n poped First Element in Stack : "<<iDelData;
					Obj.Display();
				break;

			case 3:
					iCount=Obj.Count();
					cout<<"\n Total Element in Aviable Stack : "<<iCount;
				break;
			
			case 4:
					Obj.Display();
				break;
			case 0:
					cout<<"\n Thank you for using the application\n";
                return 0;
                
            default:
                cout<<"Wrong choice\n";
				
		}
	}
	return 0;
}	
int main()
{

    int iChoice=0 ;
    cout<<"\n \t * GENERIC STACK  Singly LINKED LIST USING C++ TEMPLATE *"<<endl;
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



template<typename T>
void Stack<T>::Push(T iNo)
{
	Node<T> *NewNode= new Node<T>;
	NewNode->pNext=NULL;
	NewNode->iData=iNo;
	if(pFirst == NULL)
	{
		pFirst=NewNode;
	}
	else
	{
		NewNode->pNext=pFirst;
		pFirst=NewNode;
	}
}
template<typename T>
T Stack <T>:: Pop()
{
	T iNo=-1;
	Node<T>*Temp=pFirst;
	if(pFirst == NULL)
	{
		return iNo;
	}
	else
	{
		iNo=pFirst->iData;
		pFirst=pFirst->pNext;
		delete(Temp);
		return iNo;	
	}
}
template<typename T>
void Stack<T> :: Display()
{
	Node<T> *Temp=pFirst;
	if(Temp == NULL)
	{
		cout<<"\n Your Stack Is Empty :";
		return ;
	}
	cout<<"\n\n";
	while(Temp != NULL)
	{
		cout<<"|"<<Temp->iData<<"|\n";
		Temp=Temp->pNext;
	}
}
template<typename T>
int Stack <T>:: Count()
{	
	int iCount =0;
	Node<T> *Temp=pFirst;
	if(Temp == NULL)
	{
		cout<<"\n Your Stack Is Empty :";
		return iCount ;
	}
	while(Temp != NULL)
	{
		iCount ++;
		Temp=Temp->pNext;
	}
	return iCount;
}
