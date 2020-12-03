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
		boolean bRet=Mobj.SparseMatrix(iArr,iRow,iCol);
		if(bRet == true)
		{
			System.out.println("TRUE is Sparse Matrix");
		}
		else
		{	
			System.out.println(" Its-Not Sparse Matrix");
		}
	}
}
class Matrix
{
	boolean SparseMatrix(int iArr[][],int iRow,int iCol)
	{
		System.out.println("------ Sparse matrix is Most Element 0 ------\n");
		int iCount=0;
		for(int iCnt = 0; iCnt <iArr.length ;iCnt ++)
		{
			for(int iCnt1 =0 ; iCnt1 < iArr[iCnt].length; iCnt1 ++)
			{
				if(iArr[iCnt][iCnt1]==0)
				{
					iCount ++;
				
				}		
			}
			System.out.println();
		}
		if(((iRow == 2) && (iCol ==2)) && (iCount == 2)||((iRow == 1) && (iCol == 1)) && (iCount == 1))
		{
			return true;
		}
		else if(iCount >= iRow+iCol  )
		{
			return true;
		}
		else
		{
			return false;
		}
		
	
	}
}