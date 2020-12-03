import java.util.Scanner;

class Digits
{	
	int CountOddDigit(int iNo)
	{
		int iCount=0;
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		while(iNo != 0)
		{
			int iDigit=iNo %10;
			if(iDigit % 2 == 1)
			{
				iCount ++;
			}
			iNo=iNo/10;
		}
		return iCount;
	}
}
class Demo
{
	public static void main(String[]args)
	{
		Digits dobj = new Digits();
		Scanner in=new Scanner(System.in);
		System.out.printf("\nEnter A number  :");
		int iNo=in.nextInt();
		int iRet=dobj.CountOddDigit(iNo);
		System.out.printf("\nCount odd Digit is :"+iRet);
	}
}	
