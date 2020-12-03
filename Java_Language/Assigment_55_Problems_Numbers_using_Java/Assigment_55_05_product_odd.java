import java.util.Scanner;
class Demo
{
	public static void main(String[]args)
	{
		Numbers dobj=new Numbers();
		int iSize=0;
		Scanner s=new Scanner(System.in);
		System.out.print("\n Enter No of Element want Size :");
		iSize=s.nextInt();
		int []arr=new int[iSize];
		for(int iCnt =0  ;iCnt < iSize ;iCnt ++)
		{
			System.out.print("\n Enter Element in Array :");
			arr[iCnt]=s.nextInt();
		}
		int iRet=dobj.CountEvan(arr,iSize);
		System.out.println("product of Odd Number is :"+iRet);
		
	}
}	
class Numbers
{
	int CountEvan(int[] arr,int iSize)
	{
		int iCnt=0,iMult =1;
		for(iCnt =0 ;iCnt < iSize ; iCnt ++)
		{
			if(arr[iCnt] %2 == 1)
			{
				iMult=iMult*arr[iCnt];
			}
		}
		return iMult;
	}
}