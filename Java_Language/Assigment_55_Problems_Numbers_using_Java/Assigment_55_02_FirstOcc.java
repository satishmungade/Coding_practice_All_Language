
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
		
		int iRet=dobj.FirstOcc(arr,iSize,iNo);
		System.out.println("Your Data is First Occurence in Array :"+iRet);
	}
}	
class Numbers
{
	int FirstOcc(int[] arr,int iSize ,int iNo)
	{
		int iCnt=0;
		for(iCnt =0 ;iCnt < iSize ; iCnt ++)
		{
			if(arr[iCnt] ==iNo)
			{
				break;
			}
		}
		if(arr[iCnt] ==iNo)
		{	
			return iCnt;
		}
		else
		{
			return -1;
		}
	}
}	