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
		
		for(int iCnt =0 ;iCnt < iSize ;iCnt ++)
		{
			System.out.print("\n Enter Element in Array :");
			iArr[iCnt]=Sobj.nextInt();	
		}
		
		Array Dobj=new Array();
		
		int[] iRet=Dobj.CopyArray(iArr);
		int iSize1=iRet.length;
		System.out.print("\n Display Array :");
		for(int iCnt =0 ;iCnt < iSize1 ;iCnt ++)
		{
			System.out.print(iRet[iCnt]+"\t");
		
		}
		
	}
}
class Array
{
	int [] CopyArray(int iArr[])
	{
		int iSize=iArr.length; 
		int copy[]=new int [iSize];
		int iCnt=0;
		for( iCnt =0; iCnt < iArr.length  ; iCnt ++)
		{
				copy[iCnt]=iArr[iCnt];
		}
		return copy;
	}
}