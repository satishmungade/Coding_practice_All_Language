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
		for(int iCnt = 0; iCnt <iArr.length ;iCnt ++)
		{
			for(int iCnt1 =0 ; iCnt1 < iArr[iCnt].length; iCnt1 ++)
			{
				
				System.out.print(iArr[iCnt][iCnt1]+"\t");	
			}
			System.out.println();
		}
		System.out.println();
		Matrix Mobj=new Matrix();
		Mobj.ReverseMatrix(iArr,iRow,iCol);
		
	}
}
class Matrix
{
	void ReverseMatrix(int iArr[][],int iRow,int iCol)
	{
		System.out.println("------After Reverse------\n");
		int iSize=iArr.length;
		for(int iCnt=iSize-1; iCnt >= 0 ;iCnt --)
		{
			for(int iCnt1 =iSize-1 ; iCnt1 >= 0; iCnt1 --)
			{
				
				System.out.print(iArr[iCnt][iCnt]+"\t");
				
			}
			System.out.println();
		}

	
	}
}