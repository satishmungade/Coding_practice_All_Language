import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter Your Sorce String :");
		String src=Sobj.nextLine();
		System.out.print("Enter Your Destination String :");
		String dest=Sobj.nextLine();
		System.out.print("Enter Number Till That Number Compire :");
		int iNo=Sobj.nextInt();
		strings Dobj=new strings();
		boolean bRet=Dobj.StrEqual(src,dest,iNo);
		if(bRet == true)
		{
			System.out.print("string is Equal");
		}
		else
		{
			System.out.print("string is Not Equal");
		}
	
	}
}
class strings
{
	boolean StrEqual(String src,String dest,int iNo)
	{
		char Src[]=src.toCharArray();
		char Dest[]=dest.toCharArray();
		int iSize=Src.length;
		int iSize1=Dest.length;
		int iCnt1=0,iCnt=0;
	
		for(iCnt =0 ; iCnt < iSize-1 ; iCnt ++ )
		{	
			if(Src[iCnt]==Dest[iCnt1] )
			{	
				iCnt1 ++;
			}	
			if(iNo == iCnt1)
			{
				break;
			}
		}
		if((iNo == iCnt1))
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}	
}
