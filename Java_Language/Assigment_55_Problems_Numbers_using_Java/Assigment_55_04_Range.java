
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
		System.out.print("\n Enter a Number Start Range :");
		int iStart=s.nextInt();
		
		System.out.print("\n Enter a Number End Range :");
		int iEnd=s.nextInt();
		
		dobj.Range(arr,iSize,iStart,iEnd);
	}
}	
class Numbers
{
	void Range(int[] arr,int iSize ,int iStart,int iEnd)
	{
		int iCnt=0;
		for(iCnt =0 ;iCnt < iSize ; iCnt ++)
		{
			if(arr[iCnt] >= iStart && arr[iCnt] <= iEnd )
			{
				System.out.println(arr[iCnt]);
			}
		}
	
	}
}