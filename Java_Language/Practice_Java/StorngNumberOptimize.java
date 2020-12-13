import java.lang.*;
import java.util.*;
class Digits
{
    boolean CheckStrong(int iNo)
    {

    	int iSum=0, iDigit=0;
        int fact[]={0,1,2,6,24,120,720,5040,40320,362880};
    	if(iNo < 0)
    	{
    		iNo=-iNo;
    	}
    	int iCheck=iNo;

    	while(iNo != 0)
    	{
    		iDigit=iNo %10;
    		iNo=iNo/10;
    		iSum=iSum + fact[iDigit];//Array mathe 10 paret store kel jo digit yeil to gheil
                                    //loop wachel
    		if(iSum > iCheck) 
    		{
    			break;
    		}
    	}
    	if(iCheck == iSum)
        	return true;
        else
        	return false;
    }
}
class Demo
{
    public static void main(String arg[])
    {
        boolean bret = false;
        Digits dobj = new Digits();
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number");
        int value = sobj.nextInt();
        bret = dobj.CheckStrong(value);
        if(bret == true)
        {
            System.out.println("Number is Strong");
        }
        else
        {
            System.out.println("Number is not strong");
        }
    }
}