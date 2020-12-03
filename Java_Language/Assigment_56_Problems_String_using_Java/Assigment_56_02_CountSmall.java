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
		int iRet=Dobj.CountSmall(str);
		System.out.println("Total Count of Small Later :"+iRet);

	}
}
class strings
{
	int CountSmall(String str)
	{
		int iCount=0,iCnt=0;
		for(iCnt =0 ;iCnt < str.length();iCnt ++)
		{
			if(str.charAt(iCnt) >= 'a' && str.charAt(iCnt) <= 'z')
			{	
				 iCount ++;
			}
		}
		return iCount;
	}
}