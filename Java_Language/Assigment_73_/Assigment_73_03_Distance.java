import java.lang.*;
import java.util.*;
class Main
{
	public static void main(String []arg)
	{
		try
		{
			Distance D1=new Distance();
			Distance D2=new Distance();
			Distance D3=new Distance();
			System.out.println("Enter First Distance :");
			D1.getDistance();

			System.out.println("Enter Scound Distance :");
			D2.getDistance();

			D3.AddDistance(D1,D2);

			System.out.println("Total Distance is :");
			D3.ShowDistance();

		}
		catch(Exception e)
		{
			System.out.println("Exception Occurred :"+e.toString());
		}
	}
}
class Distance
{
	private int iFeet;
	private int iNches;
	void getDistance()
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Feet :");
		iFeet=sc.nextInt();
		System.out.print("Enter a inches :");
		iNches=sc.nextInt();
		
	}	
	void ShowDistance()
	{
		System.out.println("Feet :"+iFeet +"\t inches :"+iNches);
	}
	void AddDistance(Distance D1, Distance D2)
	{
		iNches=D1.iNches + D2.iNches;
		iFeet=D1.iFeet + D2.iFeet +(iNches/12);
		iNches=iNches%12;
	}
	
}
