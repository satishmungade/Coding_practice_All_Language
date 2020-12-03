import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter Your Sorce String :");
		String src=Sobj.nextLine();
		strings Dobj=new strings();
		Dobj.Reveres(src);
		//System.out.print(src);
	}
}
class strings
{
	void Reveres(String src)
	{
		char Src[]=src.toCharArray();
		
		int iSize=Src.length,i=0,j=0;
		char Temp;
		while( iSize != 0)
		{
			Temp=Src[i];
			Src[i]=arr[j];
			Src[j]=Temp;
			j++;
			i++;
		}
		System.out.print(Src);
		/*for(int iCnt =iSize-1; iCnt >= 0 ; iCnt --)
		{	
			System.out.print(Src[iCnt]); */
		}
	}
}
