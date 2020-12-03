import java.util.*;
import java.lang.*;
class Main
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Number to print Pattern :");
		int iNo=Sobj.nextInt();
		pattern Obj=new pattern();
		Obj.Pattern(iNo);

	}
}
class pattern
{
	void Pattern(int iNo)
	{
		
		for(int i=1; i<=iNo ; i++)
		{
			for(int j=1;j<=iNo -i+1;j++)
			{
				System.out.print(" ");
			}
			for(int j=1 ;j<= i; j++)
			{
				System.out.print((char)(64+j)+" ");
			}
			for(int j=i-1;j>=1 ;j--)
			{
				System.out.print((char)(64+j)+" ");
			}
			System.out.println();
		}
	}
}