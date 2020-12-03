import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Size of Array :");
		int iSize=Sobj.nextInt();
		int iArr[]=new int[iSize];
		for(int iCnt=0; iCnt < iArr.length;iCnt ++)
		{
			System.out.print("Enter Element in Array :");
			iArr[iCnt]=Sobj.nextInt();
		}
		Array Dobj=new Array();
		Dobj.Pattern(iArr);
		
	}
}
class Array
{
	void Pattern(int arr[])
	{
		int iCount=0;
		for(int iCnt=0;iCnt < arr.length ;iCnt ++)
		{
			iCount=arr[iCnt];
			for (int iCnt1=0; iCnt1 < iCount ;iCnt1 ++ )
			{
					System.out.print("* \t");
			}
			iCount=0;
			System.out.println();
		}
	
	}
}