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
		Dobj.Reverse(str);
	}
}
class strings
{
	void Reverse(String str)
	{
		int iCount=0,iCnt=0;
		iCount=str.length();
		for(iCnt =iCount -1  ;iCnt >= 0 ;iCnt --)
		{
			System.out.print(str.charAt(iCnt));
		}
		
	}
}