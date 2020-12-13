import java.util.*;
//import java.lang.*;
class Main
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
class MyArray
{
	public int arr[];
	
	public MyArray(int Size) //Constrctor
	{
		arr =new int [Size];
	}
	void Accept()
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter a Element :");
		
		for(int i=0 ; i< arr.length;i++)
		{
			
			arr[i] = Sobj.nextInt();
		}
		System.out.println();
	}
	void Display()
	{
		/*for(int i= 0; i < arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
		}
		System.out.println();*/
			for(int i:arr) //for each lool
			{
				System.out.println(i);
			}
	}
	
}