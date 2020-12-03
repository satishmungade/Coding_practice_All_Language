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
		Array Dobj=new Array();
		int iCount=Dobj.Diffrence(cArr);
		System.out.println("Diffrence capital-Small :"+iCount);
	}
}
class Array
{
	int Diffrence(char arr[])
	{
		int iSize=arr.length;
		int iCap=0,iSml=0;
		for(int iCnt=0;iCnt < iSize ;iCnt ++)
		{
			if(arr[iCnt]>='A' && arr[iCnt]<='Z')
			{
				iCap ++;
				
			}
			if(arr[iCnt]>='a' && arr[iCnt]<='z')
			{
				
				iSml ++;
			}
			
		}
		return iSml - iCap ;
	}
}