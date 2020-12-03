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
		int iRet=Mobj.MaxDaigonal(iArr,iRow,iCol);
		System.out.println("Max Number of Daigonal :"+iRet);
	}
}
class Matrix
{
	int MaxDaigonal(int iArr[][],int iRow,int iCol)
	{
		int iMax=0;
		for(int iCnt = 0; iCnt <iArr.length ;iCnt ++)
		{
			iMax=iArr[iCnt][0];
			for(int iCnt1 =0 ; iCnt1 < iArr[iCnt].length; iCnt1 ++)
			{
					
				System.out.print(iArr[iCnt][iCnt1]+"\t");
				if((iCnt == iCnt1) &&( iArr[iCnt][iCnt1] > iMax))
				{
					iMax=iArr[iCnt][iCnt1];
				}			
			}
			System.out.println();
		}

		return iMax;
	}
}