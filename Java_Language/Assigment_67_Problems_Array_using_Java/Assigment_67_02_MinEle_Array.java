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
		
		System.out.print("\n Enter a Size of Scound Array :");
		int iSize1=Sobj.nextInt();
		int iArr1[]=new int[iSize1];
		for(int iCnt1=0;iCnt1 < iSize1 ;iCnt1 ++)
		{
			System.out.print("\n Enter a Element in Scound Array :");
			iArr1[iCnt1]=Sobj.nextInt();
		}
		Array Dobj=new Array();
		Dobj.MinArray(iArr,iArr1);
		
	}
}
class Array
{
	void MinArray(int iArr[],int iArr1[])
	{
		int iMin=iArr[0],iMin1=iArr1[0];
		System.out.println("\n------First Array------ :\n");
		for(int iCnt =0; iCnt<iArr.length  ; iCnt ++)
		{
				if(iArr[iCnt] < iMin)
				{
					iMin=iArr[iCnt];
				}
		}
		System.out.println("\nMinimun Element in First Array :"+iMin);
		System.out.println("\n\n------Scound Array------ :\n");
		
		for(int iCnt1 =0; iCnt1< iArr1.length  ; iCnt1 ++)
		{
			if(iArr1[iCnt1] < iMin1)
			{
				iMin1=iArr1[iCnt1];
			}
		}
		System.out.println("\nMinimun Element in Scound Array :"+iMin1);
	}
}