import java.lang.*;
import java.util.*;
class Demo
{
	public static void main(String arg[])
	{
		strings Dobj=new strings();
		Scanner Sobj=new Scanner(System.in);
		
		System.out.print("Enter a String :");
		String  str = Sobj.nextLine();
		int iRet=Dobj.wordFrequency(str);
		System.out.println("Total Count of Capital Later :"+iRet);

	}
}
class strings
{
	int wordFrequency(String Str)
	{
		char Arr[]=Str.toCharArray();
		int iSize=Arr.length;
		int iCount=0,iCnt=0;
		while(iCnt < iSize)
		{
			if(Arr[iCnt] == ' ')
			{
				while((iCnt < iSize) && (Arr[iCnt]== ' '))
				{
					iCnt ++;
				}
			}
			else if((iCnt < iSize) && (Arr[iCnt] !=' '))
			{
				iCount ++;
				while(( iCnt < iSize) && (Arr[iCnt]!= ' '))
				{
					iCnt ++;
				}
			}
		}
		return iCount;
	}
} 