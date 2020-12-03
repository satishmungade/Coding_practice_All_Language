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
		boolean bRet=Dobj.ChkPallindrome(iArr);
		if(true == bRet)
		{
			System.out.print("\n its Pallindrome :");
		}
		else
		{
			System.out.print("\n its Not pallindrom:");
		}

	}
}
class Array
{
	public boolean ChkPallindrome(int iArr[])
	{
		int iSize=iArr.length;
		int iDigit[]=new int[iSize];
		int i=0,iRev=0,iCnt=0 ,iCnt1=0,J=0 ,iRe=0;
		boolean bRet=false;
		for( iCnt = 0 ,iCnt1= iSize-1 ;iCnt <= iCnt1  ;iCnt ++ ,iCnt1 -- )
		{
			int iTemp=iArr[iCnt];
			int iTemp1=iArr[iCnt1];
			while(iArr[iCnt] != 0 || iArr[iCnt1] != 0)
			{
				i=iArr[iCnt]%10;
				iArr[iCnt]=iArr[iCnt]/10;
				iRev= iRev*10 + i; 
				
				J=iArr[iCnt1]%10;
				iArr[iCnt1]=iArr[iCnt1]/10;
				iRe= iRe*10 + J; 
			}
			if((iTemp == iRev) && (iTemp1 == iRe) && (iRev == iRe))
			{
				bRet=true;
			}
			else
			{
				bRet=false;
			}
			iRev=0;
			iRe=0;
		}	
		return bRet;	
	}
}