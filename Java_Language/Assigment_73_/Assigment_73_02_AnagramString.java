import java.lang.*;
import java.util.*;
class Demo
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter First String :");
		String str1=sobj.nextLine();
		System.out.println("Enter Scound String :");
		String str2=sobj.nextLine();

		MyString mobj=new MyString();
		boolean bRet=mobj.CheckAnagram(str1,str2);
		if(bRet == true)
		{
			System.out.println("String is Anagram");
		}
		else
		{
			System.out.println("String is Not Anagram");
		}


	}
}
class MyString
{
	boolean CheckAnagram(String str1,String str2)
	{
		
		if( str1.length() != str2.length())
		{
			return false;
		}
		char arr[]=str1.toCharArray(); 
		char brr[]=str2.toCharArray();

		Arrays.sort(arr);
		Arrays.sort(brr);

		String s1=new String(arr);
		String s2=new String(brr);

		System.out.println("First String :"+s1);
		System.out.println("Secound String :"+s2);
		return true;

	}
}