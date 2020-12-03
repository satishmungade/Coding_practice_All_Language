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
		int iRet=Dobj.DiffArray(iArr,iArr1);
		System.out.print(iRet);
	}
}
class Array
{
	int DiffArray(int iArr[],int iArr1[])
	{
		int iSum=0,iSum1=0;
		System.out.println("\n------First Array------ :\n");
		for(int iCnt =0; iCnt<iArr.length  ; iCnt ++)
		{
				iSum=iSum+iArr[iCnt];
		}

		System.out.println("\n------Scound Array------ :\n");
		
		for(int iCnt1 =0; iCnt1< iArr1.length  ; iCnt1 ++)
		{
			iSum1=iSum1+ iArr1[iCnt1];
		}
		return iSum -iSum1;
	}
}