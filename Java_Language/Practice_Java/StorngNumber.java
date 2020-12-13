import java.lang.*;
import java.util.*;
class Digits
{
    boolean CheckStrong(int iNo)
    {

    	int iSum=0, iDigit=0 ,iFact=1;
    
    	if(iNo < 0)
    	{
    		iNo=-iNo;
    	}
    	int iCheck=iNo;
    	while(iNo != 0)
    	{
    		iDigit=iNo %10;
    		while(iDigit != 1)
    		{
    			iFact=iFact*iDigit; //factorial logic
    			iDigit --;
    		}
    		iNo=iNo/10;
    		iSum=iSum + iFact;
    		if(iSum > iCheck) //jar Ala number peksha sum moth jat asel tr break kr
    		{
    			break;
    		}
    		iFact=1;
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