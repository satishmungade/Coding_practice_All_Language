import java.lang.*;
import java.util.*;
class Airthmatich //supreate write class   and function  
{
	int add(int iNo,int iNo1)
	{
		return iNo + iNo1;
	}
}
class satish
{
	public static void main(String arg[])
	{
		Scanner s=new Scanner(System.in);
		System.out.print("Enter a Number");
		int iValue=s.nextInt();
		System.out.print("Enter 2nd Number");
		int iValue1=s.nextInt();
		Airthmatich Aobj=new Airthmatich();
		int iret=Aobj.add(iValue,iValue1);
		System.out.println("Addition is :"+iret);
		System.out.printf("%d \n",iret);
		
	}
}