import java.util.Scanner;
class Demo
{
	public static void main(String[]args)
	{
		Digits dobj=new Digits();
		Scanner in=new Scanner(System.in);
		System.out.printf("\nEnter A number  :");
		int iNo=in.nextInt();
		int iRet=dobj.Diff(iNo);
		System.out.printf("\nCount Evan-odd of Digit is :"+iRet);
	}
}	
class Digits
{	
	int Diff(int iNo)
	{
		int iDigit=0,iEvan=0,iOdd=0;
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		while(iNo != 0)
		{
			
			 iDigit =iNo %10;
			 if(iDigit %2== 0)
			 {
				iEvan=iEvan + iDigit;
			 }
			 else if(iDigit %2 == 1)
			 {
				iOdd=iOdd + iDigit;
			 }
			 
			iNo=iNo/10;
		}
		return iEvan - iOdd;
	}
}