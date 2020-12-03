import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter Your Sorce String :");
		String Str=Sobj.nextLine();
		strings Dobj=new strings();
		 
		boolean bRet=Dobj.StrPallindrome(Str);
		if(bRet == true)
		{
			System.out.print(" String is Pallindrom:");
		}
		else
		{
			System.out.print(" String is Not Pallindrom:");
		}
		
	}
}
class strings
{
	boolean StrPallindrome(String str)
	{
		char Str[]=str.toCharArray();
		int iNo=0;
		int iSize=Str.length;	
		int iCnt=0,iCnt1=iSize;
		for( iCnt =0 ,iCnt1 =iSize ; iCnt<=iCnt1 ; iCnt++,iCnt1--)
		{	
			if(Str[iCnt]==Str[iCnt1])
			{
				iNo=0;
			}
			else
			{
				iNo=-1;
				break;
			}
		}
		if(iNo == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
