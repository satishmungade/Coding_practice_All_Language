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
		int iRet=Dobj.DiffSmallCapital(str);
		System.out.println("Small - Capatil Diff Later :"+iRet);

	}
}
class strings
{
	int DiffSmallCapital(String str)
	{
		int iCap=0,iSmall=0,iCnt=0;
		for(iCnt =0 ;iCnt < str.length();iCnt ++)
		{
			if(str.charAt(iCnt) >= 'a' && str.charAt(iCnt) <= 'z')
			{	
				 iSmall ++;
			}
			else if(str.charAt(iCnt) >= 'A' && str.charAt(iCnt) <= 'Z')
			{	
				 iCap ++;
			}
		}
		return iSmall-iCap;
	}
}