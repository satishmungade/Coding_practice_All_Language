import java.util.Scanner;
class Demo
{
    public static void main(String[] args) 
    {
        int iSize, sum = 0;
		Numbers dobj=new Numbers();
		Scanner s = new Scanner(System.in);
        System.out.print("Enter no. of elements you want in array:");
        iSize = s.nextInt();
        int[] arr = new int[iSize];
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
			System.out.println("\n Enter the elements :");
            arr[iCnt] = s.nextInt();
        }
		int iDiff=dobj.DiffEvanOdd(arr,iSize);
		System.out.print("\nEvan odd Diff is :"+iDiff);
	}
}	
class Numbers	
{	
	int DiffEvanOdd(int[]arr, int iSize)
	{
		int iEvan=0,iOdd=0,iCnt;
		
		for(iCnt = 0; iCnt < iSize; iCnt++)
		{
			if(arr[iCnt] %2 ==0)
			{
				iEvan=iEvan + arr[iCnt];
			}
			else
			{
				iOdd=iOdd + arr[iCnt];
			}
		}
		return iEvan-iOdd;
	}
}