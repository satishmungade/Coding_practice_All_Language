import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Rows :");
		int iRow=Sobj.nextInt();
		System.out.print("Enter a Col :");
		int iCol=Sobj.nextInt();
		pattern Pobj=new pattern();
		Pobj.Pattern(iRow,iCol);
		
	}
}
class pattern
{
	void Pattern(int iRow,int iCol)
	{
		char ch='A',ch1='a';
		for(int iCnt =1; iCnt <= iRow ;iCnt ++)
		{
			for(int iCnt1=1 ;iCnt1 <= iCol ; iCnt1 ++)
			{
				if(iCnt % 2 == 1)
				{	
					System.out.print(ch+"\t");
					ch ++;
				}
				else if(iCnt % 2 == 0)
				{
					System.out.print(ch1+"\t");
					ch1 ++;
				}	
			}
				ch='A';
				ch1='a';
				System.out.println();
		}
	}
}