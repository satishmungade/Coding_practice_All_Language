import java.util.*;
import java.lang.*;
class Main
{
	public static void main(String arg[])
	{

		Scanner Sobj=new Scanner(System.in);
		int iCnt=0 ,iCnt1 =0;
		System.out.print("Enter a Row :");
		int iRow=Sobj.nextInt();
		System.out.println("Enter a col :");
		int iCol=Sobj.nextInt();
		int Arr[][]=new int[iRow][iCol];
		System.out.println("Enter a Element in Matrix :");
		
		for(iCnt =0 ; iCnt < Arr.length ; iCnt ++)
		{
			System.out.println("Row with index" +iCnt);
			for( iCnt1=0 ; iCnt1 < Arr[iCnt].length ; iCnt1 ++)
			{
				System.out.println("Enter the Element :"+iCnt+","+iCnt1);
				Arr[iCnt][iCnt1]=Sobj.nextInt();
			}
		}
		System.out.println();
		System.out.println("----Your Matrix is ----------");
		
		for(iCnt =0 ;iCnt <  Arr.length ; iCnt ++)
		{
			for(iCnt1 =0 ; iCnt1 < Arr[iCnt].length; iCnt1 ++)
			{
				System.out.print(Arr[iCnt][iCnt1]+"\t");
			}
			System.out.println();
		}
		Matrix mobj=new Matrix();
		mobj.transposeMatrix(Arr);
		
		
	}
}
class Matrix
{
	void transposeMatrix(int Arr[][])
	{
		System.out.println("----------your Transpose Matrix is ---------");
		
		for(int iCnt =0 ;iCnt <  Arr.length ; iCnt ++)
		{
			for(int iCnt1 =0 ; iCnt1 < Arr[iCnt].length; iCnt1 ++)
			{
				System.out.print(Arr[iCnt1][iCnt]+"\t");
			}
			System.out.println();
		}
	}
}