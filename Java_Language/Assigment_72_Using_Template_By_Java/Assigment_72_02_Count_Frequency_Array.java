import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Generic Dobj=new Generic();
		Integer iArr[]={10,20,10,40,10,60,70,10};
		int iRet=Dobj.Frequency(iArr,10);   
		System.out.print("\nfrequency of Element :"+iRet);

	
		Double dArr[]={10.0,20.1,60.0,40.1,10.2,60.0,70.2};
		int Ret=Dobj.Frequency(dArr,60.0);
		System.out.print("\nfrequency of Element :"+Ret);
	}
}
class Generic
{
	
	public <T>int Frequency(T[] Arr,T iNo)
	{
		int iCount =0;
		int iSize=Arr.length;
		for(int iCnt=0 ; iCnt < iSize; iCnt ++)
		{
			if(Arr[iCnt] == iNo)
			{
				iCount ++;
			}
			
		}
		return iCount ;
	}
}