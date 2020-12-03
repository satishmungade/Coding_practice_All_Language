import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Size of array :");
		int iSize=Sobj.nextInt();
		char iArr[]=new char[iSize];
		for(int iCnt=0 ; iCnt < iSize ; iCnt ++)
		{

			System.out.print(iCnt+" Enter a Element Character in Array :");
			iArr[iCnt]=Sobj.next().charAt(0);
		}
		Array Dobj=new Array();
		int iRet=Dobj.CountCaptial(iArr);
		System.out.print("Total Count of Captital Later is:"+iRet);

	}
}
class Array
{
	int CountCaptial(char iArr[])
	{
		int iCount=0;
		for(int iCnt=0 ;iCnt <iArr.length ;iCnt ++ )
		{
			if(iArr[iCnt]>='A' && iArr[iCnt]<='Z')
			{
				iCount ++;
			}
		}
		return iCount;
	}
}