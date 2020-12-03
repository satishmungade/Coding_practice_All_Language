import java.util.Scanner;
class Demo
{
    public static void main(String[] args) 
    {
		Numbers dobj=new Numbers();
        int iSize, sum = 0;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter no. of elements you want in array:");
        iSize = s.nextInt();
        int[] arr = new int[iSize];
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
			System.out.println("\n Enter the elements :");
            arr[iCnt] = s.nextInt();
        }
		dobj.iDivisible(arr,iSize);
		
	}	
}
class Numbers
{	
	void iDivisible(int[]arr, int iSize)
	{
		int iCnt;
		
		System.out.println("\nDivisiable % 11 elements is :");
		for(iCnt = 0; iCnt < iSize; iCnt++)
		{
		
			if( arr[iCnt] % 11 == 0 )
			{
				System.out.println(arr[iCnt]);
			}
			
		}
	}
}