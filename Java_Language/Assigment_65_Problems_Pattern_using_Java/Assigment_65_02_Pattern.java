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
		Pattern Dobj=new Pattern();
		Dobj.Print(iRow,iCol);

	}
}
class Pattern
{
	void Print(int iRow ,int iCol)
	{

		for(int iCnt = 1 ;iCnt <= iRow ;iCnt++)
		{
			for(int iCnt1 = iCol; iCnt1 >=1 ; iCnt1 --)
			{
				if(iCnt==iCnt1)
				{
					System.out.print("#\t");
				}
				else if(iCnt > iCnt1)
				{
					System.out.print("@\t");
				}
				else if(iCnt < iCnt1)
				{
					System.out.print("*\t");
				}

			}
			System.out.println();
		}
	}
}