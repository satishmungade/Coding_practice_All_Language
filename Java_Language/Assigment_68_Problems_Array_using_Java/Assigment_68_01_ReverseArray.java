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
		int iDigit[]=new int[iSize];
		int i=0,iRev=0,k=0;
		for(int iCnt=0 ;iCnt < iSize  ;iCnt ++ )
		{
			
			while(iArr[iCnt] != 0)
			{
				i=iArr[iCnt]%10;
				iArr[iCnt]=iArr[iCnt]/10;
				iRev= iRev*10 + i; 
			}
			iDigit[k]=iRev;
			k++;
			iRev=0;
		}	
		for(int iCnt=0 ;iCnt < iSize  ;iCnt ++ )
		{
			System.out.print(iDigit[iCnt]+"\t");
		}	
		
	}
}