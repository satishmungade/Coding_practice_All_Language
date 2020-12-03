import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner Sobj=new Scanner(System.in);
		System.out.print("Enter Your Sorce String :");
		String src=Sobj.nextLine();
		System.out.print("Enter Your Destination String :");
		String dest=Sobj.nextLine();
		System.out.print("Enter Number Till That Number Will Cancat :");
		int iNo=Sobj.nextInt();
		strings Dobj=new strings();
		Dobj.StrNCancat(src,dest,iNo);
		
	}
}
class strings
{
	void StrNCancat(String src,String dest,int iNo)
	{
		
		char Src[50]=src.toCharArray();
		char Dest[]=dest.toCharArray();
		int iSize=Dest.length;
		int iSize1=Src.length;
		int iCnt=iSize1+1;
		for(int iCnt1 =0 ; iCnt1 < iSize-1 ; iCnt1 ++)
		{	
			
			//Src[iCnt]=obj.next().charAt(0);
			Src[iCnt]=Dest[iCnt1];
			
			if(iCnt1 == iNo)
			{
				break;
			}
			iCnt ++;
		}
		System.out.print(Src);
	}
}
