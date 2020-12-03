import java.util.Scanner;
class Demo
{
	public static void main(String[]args)
	{
		Digits dobj=new Digits();
		Scanner in=new Scanner(System.in);
		System.out.printf("\nEnter A number  :");
		int iNo=in.nextInt();
		int iRet=dobj.MultDigit(iNo);
		System.out.printf("\nCount Multiplication of Digit is :"+iRet);
	}
}	
class Digits
{
	int MultDigit(int iNo)
	{
		int iDigit=0,iMult=1;
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		while(iNo != 0)
		{
			
			 iDigit =iNo %10;
			 iMult=iMult*iDigit;
			iNo=iNo/10;
		}
		return iMult;
	}
}	

