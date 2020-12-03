import java.util.*;
import java.lang.*;
class  Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter Size of Array :");
		int iSize=Sobj.nextInt();
		int iArr[]=new int[iSize];

		for(int iCnt =0; iCnt< iSize ; iCnt ++)
		{
			System.out.print("Enter a Element in Array :");
			iArr[iCnt]=Sobj.nextInt();
		}

		System.out.print("\n Enter Size of Scound Array :");
		int iSize1=Sobj.nextInt();
		int iArr1[]=new int[iSize1];

		for(int iCnt1 =0; iCnt1< iSize1 ; iCnt1 ++)
		{
			System.out.print("Enter a Element Scound Array :");
			iArr1[iCnt1]=Sobj.nextInt();
		}

		Array Dobj=new Array();
		Dobj.print(iArr,iArr1,iSize,iSize1);

	}
}
class Array
{
	void print(int iArr[],int iArr1[],int iSize,int iSize1)
	{
		int iCount=iSize+iSize1;
		int iNew[]=new int[iCount]; 
		
		for(int iCnt =0; iCnt < iSize  ; iCnt ++)
		{
			iNew[iCnt]=iArr[iCnt];
		}

		for( int j =0; j < iNew.length  ; j ++)
		{
			System.out.print(iNew[j]);
			for(int iCnt1 = 0; iCnt1 < iSize1 ; iCnt1 ++)
			{
				iNew[j]=iArr[iCnt1];
			}
		}
	}
}