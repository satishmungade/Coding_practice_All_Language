import MyArray.MyArray;
import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Size of Array :");
		int iSize=Sobj.nextInt();
		
		MyArray Dobj=new MyArray(iSize);
		Dobj.Accept();
		Dobj.Display();
	}
}