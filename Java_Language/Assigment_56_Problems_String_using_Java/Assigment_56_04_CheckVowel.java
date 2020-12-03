import java.lang.*;
import java.util.*;
class Demo
{
	public static void main(String arg[])
	{
		strings Dobj=new strings();
		Scanner Sobj=new Scanner(System.in);
		String str="";
		System.out.print("Enter a String :");
		str = Sobj.nextLine();
		boolean iRet=Dobj.CheckVowel(str);
		if(iRet == true)
			System.out.print(" TURE:");
		else
			System.out.print("False:");
		
	}
}
class strings
{
	boolean CheckVowel(String str)
	{
		int iCount=0,iCnt=0;
		for(iCnt =0 ;iCnt < str.length();iCnt ++)
		{
			if(str.charAt(iCnt) >= 'a' || str.charAt(iCnt) <='e' || str.charAt(iCnt) >= 'i' || str.charAt(iCnt) >= 'o' || str.charAt(iCnt) >= 'u' || str.charAt(iCnt) >= 'A' || str.charAt(iCnt) >= 'E' ||str.charAt(iCnt) >= 'I' || str.charAt(iCnt) >= 'O' || str.charAt(iCnt) >= 'U')
				return true;
			else
				return false;
		}
	}
}