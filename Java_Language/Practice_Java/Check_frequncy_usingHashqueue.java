import java.lang.*;
import java.util.*;
class Demo
{
	public static void main(String arg[])
	{

		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter Scound String");
		String str=sobj.nextLine();

		MyString mobj=new MyString();
		mobj.CheckFrequency(str);
		


	}
}
class MyString
{
	void CheckFrequency(String str)
	{
		char arr[]=str.toCharArray();
		HashMap<Character,Integer>hobj=new HashMap<Character,Integer>();
		for(char c:arr)
		{
			if(hobj.containsKey(c))
			{
				hobj.put(c,hobj.get(c)+1);
			}
			else
			{
				hobj.put(c,1);
			}
		}
		System.out.println("Frequency of each Character :");
		System.out.println(hobj);
	}
}
/*class MyString
{
    void CheckFrequency(String str) throws Exception
    {
        // String to character array
        char arr[] = str.toCharArray();
        // HashMap <Key, Value> obj = new HashMap <Key, Value>();
        HashMap <Character, Integer> hobj = new HashMap<Character,Integer>();
        for(char c : arr)    // For each loop
        {
            if(hobj.containsKey(c))    // Check whether key is there or not
            {
                hobj.put(c,hobj.get(c)+1);    // Update the key
            }
            else
            {
                hobj.put(c,1);    // Add new key
            }
        }
        System.out.println("Frequency of each character is :");
        System.out.pri*/