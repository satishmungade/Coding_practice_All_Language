import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Size of array :");
		int iSize=Sobj.nextInt();
		int iArr[]=new int[iSize];
		for(int iCnt=0 ; iCnt < iSize ; iCnt ++)
		{

			System.out.print(iCnt+"Enter a Element in Array :");
			iArr[iCnt]=Sobj.nextInt();
		}
		Array Dobj=new Array();
		Dobj.ReverseArray(iArr);

	}
}
class Array
{
	void ReverseArray(int iArr[])
	{
		int iSize=iArr.length;
		int iNew[]=new int[iSize];
		int i=0,iSum=0;
		for(int iCnt=0 ;iCnt < iSize  ;iCnt ++ )
		{
			while(iArr[iCnt] != 0)
			{
				int iDigit=iArr[iCnt]%10;
				iSum=iSum + iDigit;
				iArr[iCnt]=iArr[iCnt]/10;
			}
			iNew[i]=iSum;
			iSum =0;
			i++;
		}
		for(int iCnt =0; iCnt< iNew.length; iCnt ++)
		{
			System.out.print(iNew[iCnt]+"\t");
		}	
	}
}