 #include<iostream>
#include<fstream>
using namespace std;
/*
1.fstreambase
2.ifstream -->derived from fstreambase<for reading  inforamtion data file>
3.ofstream -->derived from fstreambase<for creting file/writing file infortion file>
4.fstream -->derived from fstreambase<for creting file/writing file infortion file>
in order to oprn file to way
1.using the constructor
2.using the member function open () of the class.

obj.open(filename,ios:in) ;// if file not aviable they cant create a  file.
obj.open(filename,ios:out)//if file not parset that time file is creating
obj.open(filename)-->by deflaut para meter is ios::out
obj.seekg(0,ios::end); //check file size as bytes

*/
int main()
{
	
	string st="satish mungade";
	string st1;
	//opeing files using constructor. and write into data file.
	ofstream out("satish.txt"); //out ony name can give
	out<<st; //file write data

	//opeing files using constructor. and read data from file.
	ifstream in("satish1.txt");
	//in>>st1; //print only single word they cant consider a /n Space all
	getline(in,st1); // data display
	cout<<st1;

	return 0;
}