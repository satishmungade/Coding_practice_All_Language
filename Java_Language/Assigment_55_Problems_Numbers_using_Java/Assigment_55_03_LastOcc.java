
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
		System.out.print("\n Enter a Number That check Occurnce or Not :");
		int iNo=s.nextInt();
		
		int iRet=dobj.LastOcc(arr,iSize,iNo);
		System.out.println("Your Data is Last Occurence in Array :"+iRet);
	}
}	
class Numbers
{	
	int LastOcc(int[] arr,int iSize ,int iNo)
	{
		int iCnt=0,iLast=-1;
		for(iCnt =0 ;iCnt < iSize ; iCnt ++)
		{
			if(arr[iCnt] ==iNo)
			{
				iLast=iCnt;
			}
		}
		return iLast;
	
	}
}