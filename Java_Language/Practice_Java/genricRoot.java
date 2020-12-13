import java.lang.*;
import java.util.*;
class Digits
{
    int GenericRoot(int ino)
    {
        int isum = 0;
        if(ino < 0)
        {
            ino = -ino;
        }

        isum = ino; 

        while(isum > 9) 
        {
            ino = isum; 
            isum = 0;
            while(ino != 0)
            {
                isum = isum + (ino % 10);
                ino = ino / 10;
            }
            System.out.println(isum);
        }

        return isum;
    }
}
class Demo
{
    public static void main(String arg[])
    {
        Digits dobj = new Digits();
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number");
        int value = sobj.nextInt();
        int ret = dobj.GenericRoot(value);
        System.out.println("Generic root is : "+ret);
    }
}