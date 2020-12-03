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
		int iCol= Arr.length;
		int iRow=(iCol + iCol)-1;
		int iprint=iCol;
		for(int iCnt=0;iCnt < iRow ;iCnt ++  )
		{
			for(int iCnt1 =0 ;iCnt1 < iprint;iCnt1 ++)
			{
				
				System.out.print(Arr[iCnt1]+"\t");
				
			}
			if(iCnt < iCol -1)
			{
				iprint --;
			}
			else
			{
				iprint ++;
			}
			System.out.println();
		}
		
	}
}