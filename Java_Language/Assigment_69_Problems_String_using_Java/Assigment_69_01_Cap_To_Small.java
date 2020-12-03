import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Size of Array :");
		int iSize=Sobj.nextInt();
		char cArr[]=new char[iSize];
		for(int iCnt=0; iCnt < cArr.length;iCnt ++)
		{
			System.out.print("Enter Element(Character type ) in Array :");
			cArr[iCnt]=Sobj.next().charAt(0);
		}
		Array Dobj=new Array();
		Dobj.ArrayReplace(cArr);
		

	}

}
class Array
{
	void ArrayReplace(char arr[])
	{
		int iSize=arr.length;
		int iCnt=0,iCount=0;

		for(iCnt=0;iCnt < iSize ;iCnt ++)
		{
			int Ac=(int)arr[iCnt];
			if( Ac >=65 && Ac <=90)
			{
			
				char c=(char)(arr[iCnt]+32);
				arr[iCnt]=c;
			}
			System.out.print(arr[iCnt]+"\t");
		}
	
	}
}