import java.lang.*;
import java.util.*;
class Demo
{
	public static void main(String arg[])
	{
		Generic Dobj=new Generic ();
		
		Integer Arr[]={10,20,30,40,50,60,70,80,90};
		for(int iCnt=0;iCnt < Arr.length; iCnt ++)
		{
			System.out.print(Arr[iCnt]+" \t ");
		}
		System.out.println("\n");
		
		
		Dobj.Reveres(Arr);

		
		Character cArr[]={'A','B','E','D','E','F','G','H','I'};
		for(int iCnt=0;iCnt < cArr.length; iCnt ++)
		{
			System.out.print(cArr[iCnt]+" \t ");
		}
		System.out.println("\n");
		Dobj.Reveres(cArr);
		
	}
}
class Generic
{
	public<T> void Reveres(T[]Arr)
	{
		int iSize=Arr.length;
		System.out.println("\n");

		for(int iCnt=iSize-1 ; iCnt >= 0 ; iCnt --)
		{
			System.out.print(Arr[iCnt]+" \t ");
		}
		System.out.println("\n");
	}
}