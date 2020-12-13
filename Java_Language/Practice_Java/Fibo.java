import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Number Dobj=new Number();
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter A Number Printf Fibo Series : ");
		int iNo=obj.nextInt();
		Dobj.FiboSeries(iNo);
	}
}
class Number
{
	void FiboSeries(int iNo)
	{
		int First=0,Second=1,Third=0;
		
		for(int iCnt =1 ; iCnt < iNo ; iCnt ++)
		{
			System.out.print(First+"\t");
			Third=First +Second;
			First=Second;
			Second=Third;	
		}
	
	}
}