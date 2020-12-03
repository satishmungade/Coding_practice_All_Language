import java.lang.*;
import java.util.*;
class Demo
{
    public static void main(String arg[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter string");
            String str = sobj.nextLine();
            MyString mobj = new MyString();
             mobj.ReversWorld(str);
        }
        catch(Exception obj)
        {}
    }
}
class MyString
{
    void ReversWorld(String str)
    {
        String arr[]=str.split(" ");
        StringBuilder newStr=new StringBuilder();
        for( String s :arr)
        {
            StringBuilder sb=new StringBuilder(s);
            String temp=sb.reverse().toString();
            newStr.append(temp+" ");
        }
        System.out.println("Updated String is :"+newStr);
    }
}      
