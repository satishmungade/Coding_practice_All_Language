import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Size of array :");
		int iSize=Sobj.nextInt();
		float iArr[]=new float[iSize];
		for(int iCnt=0 ; iCnt < iSize ; iCnt ++)
		{

			System.out.print(iCnt+" Enter a Element Character in Array :");
			iArr[iCnt]=Sobj.nextFloat();
		}
		Array Dobj=new Array();
		Dobj.CountCaptial(iArr);
		

	}
}
class Array
{
	void CountCaptial(float iArr[])
	{
		int iCount=0;
		for(int iCnt=0 ;iCnt <iArr.length ;iCnt ++ )
		{
			if(iArr[iCnt] < 35)
			{
				System.out.println(" Fail class :"+iArr[iCnt]);
			}
			else if(iArr[iCnt] >= 35 && iArr[iCnt] < 50)
			{	
				System.out.println(" Pass class :"+iArr[iCnt]);
			}
			else if(iArr[iCnt] >= 50 && iArr[iCnt] < 60)
			{	
				System.out.println(" Second class :"+iArr[iCnt]);
			}
			else if(iArr[iCnt] >= 60 && iArr[iCnt] < 70)
			{	
				System.out.println(" First class :"+iArr[iCnt]);
			}
			else if(iArr[iCnt] >= 70 && iArr[iCnt] < 100)
			{	
				System.out.println(" First class with Distinction :"+iArr[iCnt]);
			}
		}
	}	
}