import java.lang.*;
import java.util.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Numbers Row :");
		int iRow=Sobj.nextInt();
		System.out.print("Enter a Numbers Col :");
		int iCol=Sobj.nextInt();
		int iArr[][]=new int[iRow][iCol];
		System.out.println("Enter a Element in Matrix :");
		
		for(int iCnt = 0; iCnt <iArr.length ;iCnt ++)
		{
			System.out.println("Row with index :"+iCnt);
			for(int iCnt1 =0 ; iCnt1 < iArr[iCnt].length; iCnt1 ++)
			{
				System.out.println("Enter the Element :"+iCnt+","+iCnt1);
				iArr[iCnt][iCnt1]=Sobj.nextInt();			
			}
		}
		System.out.println();
		Matrix Mobj=new Matrix();
		Mobj.AddColumn(iArr,iRow,iCol);
		
	}
}
class Matrix
{
	void AddColumn(int iArr[][],int iRow,int iCol)
	{
		int iAdd=0,iCnt1=0;
		for(int iCnt = 0; iCnt <iArr.length ;iCnt ++)
		{
			for( iCnt1 =0 ; iCnt1 < iArr[iCnt].length; iCnt1 ++)
			{
				System.out.print(iArr[iCnt][iCnt1]+"\t");
				iAdd=iAdd+iArr[iCnt1][iCnt];
							
			}
			System.out.println("Summation of Column No:"+iCnt1 +"iS :" +iAdd);
			iAdd=0;
			System.out.println();
		}

	}
}