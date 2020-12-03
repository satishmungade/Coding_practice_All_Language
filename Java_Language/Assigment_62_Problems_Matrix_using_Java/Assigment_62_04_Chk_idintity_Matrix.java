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
		boolean bRet=Mobj.IdentityMatrix(iArr,iRow,iCol);
		if(bRet == true)
		{
			System.out.println("TRUE is identity Matrix");
		}
		else
		{	
			System.out.println(" Its-Not identity Matrix");
		}
	}
}
class Matrix
{
	boolean IdentityMatrix(int iArr[][],int iRow,int iCol)
	{
		System.out.println("------ matrix is identity uper 1 lower 0------\n");
		int iCount=0;
		for(int iCnt = 0; iCnt <iArr.length ;iCnt ++)
		{
			for(int iCnt1 =0 ; iCnt1 < iArr[iCnt].length; iCnt1 ++)
			{
				if((iCnt == iCnt1) && (iArr[iCnt][iCnt1]==1))
				{
					iCount ++;
				
				}		
			}
			System.out.println();
		}

		if(iCount == iRow && iCount == iCol)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	
	}
}