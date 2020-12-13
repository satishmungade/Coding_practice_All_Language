import java.lang.*;
import java.util.*;
class Demo
{
	public static void main(String arg[])
	{
		Number Dobj=new Number();
		Scanner Obj.new Scanner(System.in);
		System.out.print("Enter A number");
		int iNo=Obj.nextInt();
		Boolean iRet=Dobj.Arstrong(iNo);
		if(iRet == true)
			System.out.print("\n Its Arstrong");
		else
			System.out.print("\n Its not Arstrong");
	}
}
class Number
{
	int CountDigit(int iNo)
	{
		while(iNo != 0)
		{
			iCnt ++;
			iNo=iNo/10;
		}
		return iCnt;
	}
	boolean Arstrong(int iNo)
	{
		int iSum=0,iTemp=iNo,iMult=1,iDigit=0;
		int iPower=CountDigit(iNo);
		while(iNo != 0)
		{
			iDigit =iNo %10;
			for(int i=1 ;iCnt <=iPower ;i++)
			{
				iMult =iMult *iDigit;
				
			}
			iSum=iSum + iFact; 
			iNo=iNo /10;
		}
		iF(iTemp == iSum)
			{
				return true;
			}
			else
			{
				return false;
			}
	}
}