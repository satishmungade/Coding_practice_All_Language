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
			System.out.print("Enter Element in Array :");
			cArr[iCnt]=Sobj.next().charAt(0);
		}
		
		System.out.print("Enter a Character To Search :");
		char ch = Sobj.next().charAt(0);
		
		Array Dobj=new Array();
		int iCount=Dobj.SearchCount(cArr,ch);
		System.out.print("Total occurrence Later :"+iCount);
	}
}
class Array
{
	int SearchCount(char arr[],char ch)
	{
		int iSize=arr.length;
		int iCount=0;
		for(int iCnt=0;iCnt < iSize ;iCnt ++)
		{
			int Ac=(int)arr[iCnt];
			if( Ac >=65 && Ac <=90)
			{
			
				char c=(char)(arr[iCnt]+32);
				arr[iCnt]=c;
			}
			if(arr[iCnt] == ch)
			{
				iCount ++;
			}
		System.out.print(arr[iCnt]+"\t");	
		}
		return iCount;
	}
}