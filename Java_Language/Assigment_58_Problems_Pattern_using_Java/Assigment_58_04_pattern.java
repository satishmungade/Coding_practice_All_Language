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
		
		for(int iCnt=1 ; iCnt <= iRow ; iCnt ++)
		{
			for(int iCnt1=1; iCnt1 <= iCol ;iCnt1 ++)
			{
				if(iCnt1 % 2 == 1)
				{	
					System.out.print("*\t");
				}
				if(iCnt1 % 2 == 0)
				{	
					System.out.print("#\t");
				}
			}
			System.out.println();
		}
	}
}