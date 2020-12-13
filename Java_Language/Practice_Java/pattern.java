import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Pattern Dobj=new Pattern();
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter A  Rows : ");
		int iNo=obj.nextInt();
		System.out.print("Enter A  Cols : ");
		int iNo1=obj.nextInt();
		Dobj.Matrix(iNo,iNo1);
	}
}
class Pattern
{
	void Matrix(int iRow,int iCol)
	{
		
		char ch='A';
		int iCnt=1;
		
		for(int i=1 ; i <=iRow ; i ++)
		{
			for(int j = 1 ; j <= iCol ; j ++ )
			{
				if(i == j)
				{
					System.out.print("&\t");
				}
				else if((i == 1) || (j == 1) ||(i== iRow) || (j == iCol))
				{
					System.out.print("*\t");
				}
			
				else if(i > j)
				{
				
					System.out.print(iCnt+"\t");
					iCnt ++;
					
				}
				else
				{	
					System.out.print(ch+"\t");	
					ch ++;
				}
			
			}
			System.out.print("\n");
		}
	
	}
}