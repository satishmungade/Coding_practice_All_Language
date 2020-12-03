import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter Your String :");
		String str=Sobj.nextLine();
		string Dobj=new string();
		Dobj.Pattern(str);
		
	}
}
class string
{
	void Pattern(String str)
	{
		char Arr[]=str.toCharArray();
		int iSize=Arr.length;
		for(int iCnt=iSize-1 ;iCnt >= 0 ; iCnt --  )
		{
			for(int iCnt1 =0 ;iCnt1 < iSize;iCnt1 ++)
			{
				if(iCnt > iCnt1 || iCnt == iCnt1)
				{	
					System.out.print(Arr[iCnt1]+"\t");
				}
			}
			
			System.out.println();
		}
	}
}