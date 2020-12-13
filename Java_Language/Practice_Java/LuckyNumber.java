// Accept N numbers from user and display all lucky members from that N numbers
// Lucky member is sucha a member whose value is the addition of its neighbours.
// Input : N = 10
//	0	1	2	3	4	5	6	7	8	9	
//	5	8	12	4	-8	8	10	2	2	0
//			-	-			-		-	
// Output :	12	4	10	2
import java.lang.*;
import java.util.*;
class DemoArray
{
	void DisplayLucky(int arr[])
	{
		System.out.println("Lucky numbers are");

		for(int i = 1; i< arr.length-1;i++)
		{
			if((arr[i] == (arr[i-1] + arr[i+1])))
			{	
								// arr[i]   =   arr[i-1]   +   arr[i+1];
				System.out.println(arr[i]+" = "+arr[i-1]+" + "+arr[i+1]);
			}
		}
	}
}
class Demo
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of elements");
		int size = sobj.nextInt();
		int arr[] = new int[size];
		System.out.println("Enter elements");
		for(int i = 0; i < arr.length; i++)
		{
			arr[i] = sobj.nextInt();
		}

		DemoArray dobj = new DemoArray();
		dobj.DisplayLucky(arr); 
	}
}

