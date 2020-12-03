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
		Dobj.Evanprint(iArr,iArr1);

	}
}
class Array
{
	void Evanprint(int iArr[],int iArr1[])
	{
		int iFirst=0,iScound=0;
		System.out.println("\n------First Array Element------ :\n");
		for(int iCnt =0; iCnt<iArr.length  ; iCnt ++)
		{
			iFirst=iFirst + iArr[iCnt];
			System.out.print(iArr[iCnt]+"\t");
		}	

		System.out.println("\n------Scound Array Element------ :\n");
		
		for(int iCnt1 =0; iCnt1< iArr1.length  ; iCnt1 ++)
		{
			iScound=iScound +iArr1[iCnt1];
			System.out.print(iArr1[iCnt1]+"\t");
		
		}
		System.out.println("\n First Array All Element Addition is :"+iFirst);
		System.out.println("\n Scound Array All Element Addition is:"+iScound);
	}
}	