import java.lang.*;
import java.util.*;

class Demo
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows");
        int row = sobj.nextInt();
        System.out.println("Enter number of columns");
        int col = sobj.nextInt();
        int arr[][] = new int[row][col];
        System.out.println("Enter the elements");
        for(int i = 0; i<arr.length; i++)
        {
            System.out.println("Row with index : "+i);
            for(int j = 0; j< arr[i].length; j++)
            {
                System.out.println("Enter the element :"+i+" , "+j);
                arr[i][j] = sobj.nextInt();
            }
        }
		 System.out.println("Your Matrix  elements");
        for(int i = 0; i<arr.length; i++)
        {
           
            for(int j = 0; j< arr[i].length; j++)
            {
                System.out.print(arr[i][j]+"\t");
                
            }
			System.out.println();
			
        }
        Matrix mobj = new Matrix();
        mobj.RowSort(arr);
		
		System.out.println("After Row by Sort Matrix elements");
        for(int i = 0; i<arr.length; i++)
        {
           
            for(int j = 0; j< arr[i].length; j++)
            {
                System.out.print(arr[i][j]+"\t");
                
            }
			System.out.println();
			
        }
	}
}	
class Matrix
{
	void RowSort(int Arr[][])
	{
		int pass=0,Temp=0,Min_i=0,j=0,i=0;
		
		for(i = 0; i< Arr.length; i++)
        {
			
           for(pass = 0; pass < Arr[i].length -1; pass++)
			{
				Min_i= pass;
				for(j=pass + 1 ; j < Arr.length ; j ++)
				{
					if((Arr[i][Min_i] >  Arr[i][j]) && (i==J) //Daigonal Matrix
					{
						Min_i=j;
					}	
					
				}
				
				//swap
				if(Arr[i][pass] != Arr[i][Min_i])
				{
					Temp=Arr[i][pass];
					Arr[i][pass]=Arr[i][Min_i];
					Arr[i][Min_i]=Temp;
				}				
		   }
			
        }
	}
}