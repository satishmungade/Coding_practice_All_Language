import java.lang.*;
import java.util.*;
class Digits
{
    void CheckStrongRange(int iNo,int iNo1)
    {

    	int iSum=0, iDigit=0;
        int fact[]={0,1,2,6,24,120,720,5040,40320,362880};
    	if(iNo < 0)
    	{
    		iNo=-iNo;
    	}
        if(iNo > iNo1)
        {
            return;
        }
    	
        int iCheck=iNo;
        for(int iCnt =iNo ;iCnt <= iNo1 ;iCnt ++  )
    	{

             iCnt=iNo;
            while(iNo != 0)
    	   {
    		  iDigit=iNo %10;
    		  
    		  iSum=iSum + fact[iDigit];//Array mathe 10 paret store kel jo digit yeil to gheil
              iNo=iNo/10;                        //loop wachel
    		  if(iSum > iCnt) 
    		  {
    			 break;
    		  } 
    	   }
           if(iCnt == iSum)
           {
             System.out.println(iSum); 
           }
         iSum =0;
        }
    }        
}
class Demo
{
    public static void main(String arg[])
    {
        boolean bret = false;
        Digits dobj = new Digits();
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter  Start range number");
        int value = sobj.nextInt();
        System.out.println("Enter End Range number");
        int iNo = sobj.nextInt();
        dobj.CheckStrongRange(value,iNo);
       
    }
}