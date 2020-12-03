import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Generic Dobj=new Generic(); 
		Dobj.Display('M',5);  // with obj
		Generic.Display(10,6); //with className use Static
	}
}
class Generic
{
	static <T> void Display(T Value,int iSize )
	{
		for(int iCnt =1 ; iCnt <=iSize ; iCnt ++)
		{
			System.out.print(Value+"\t");
		}
		System.out.println("\n");
	}
} 