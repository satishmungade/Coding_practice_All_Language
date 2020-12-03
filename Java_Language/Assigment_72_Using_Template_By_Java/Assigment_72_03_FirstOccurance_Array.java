import java.util.*;
import java.lang.*;
class Demo
{
	public static void main(String arg[])
	{
		Generic Dobj=new Generic();
		Integer iArr[]={10,20,10,40,10,40,70,10};
		int iRet=Dobj.FirstOcc(iArr,40);   
		System.out.print("\nElement Position is :"+iRet);

	
		Double dArr[]={10.0,20.1,60.0,40.1,10.2,60.0,70.2};
		int Ret=Dobj.FirstOcc(dArr,60.0);
		System.out.print("\nElement Position is  :"+Ret);
	}
}
class Generic
{
	
	public <T>int FirstOcc(T[] Arr,T iNo)
	{
		int iCount =-1;
		int iSize=Arr.length;
		for(int iCnt=0 ; iCnt < iSize; iCnt ++)
		{
			if(Arr[iCnt] == iNo)
			{
				iCount=iCnt;
				break;
				
			}
			
		}
		return iCount;
	}
}