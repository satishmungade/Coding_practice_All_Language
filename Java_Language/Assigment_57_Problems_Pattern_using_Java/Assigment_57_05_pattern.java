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
		int iNo=1;
		for(int iCnt=1 ; iCnt <=iRow ; iCnt ++)
		{
			for(int iCnt1=1; iCnt1 <=iCol ;iCnt1 ++)
			{
				System.out.print(iNo+"\t");
				iNo ++;
			}
			
			System.out.println();
		}
	}
}