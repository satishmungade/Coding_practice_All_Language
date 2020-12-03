import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Rows :");
		int iRow=Sobj.nextInt();
		System.out.print("Enter a Cols :");
		int iCol=Sobj.nextInt();
		patrern Pobj=new patrern();
		Pobj.Pattern(iRow,iCol);
	}
}
class patrern
{
	void Pattern(int iRow,int iCol)
	{
		
		for(int iCnt=iRow ; iCnt >0 ; iCnt --)
		{
			for(int iCnt1=iCol; iCnt1 > 0 ;iCnt1 --)
			{
				
				System.out.print(iCnt1+"\t");
				
			}
			System.out.println();
		}
	}
}