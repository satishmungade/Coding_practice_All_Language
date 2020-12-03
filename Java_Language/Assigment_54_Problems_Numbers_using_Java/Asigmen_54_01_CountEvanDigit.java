import java.lang.*;
import java.util.*;
class Digits
{
	int CountEvanDigit(int iNo)
	{
		int iCount=0;
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		while(iNo != 0)
		{
			int iDigit=iNo %10;
			if(iDigit % 2 == 0)
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
	public static void main(String arg[])
	{
		Digits dobj=new Digits();
		Scanner in=new Scanner(System.in);
		System.out.printf("\nEnter A number  :");
		int iNo=in.nextInt();
		int iRet=dobj.CountEvanDigit(iNo);
		System.out.printf("\nCount Evan Digit is :"+iRet);
	}
}	
	 
