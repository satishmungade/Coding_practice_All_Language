#include<stdio.h>

int main()
{
   char string[20];
   
   printf("\n\nEnter the String;\t");
   gets(string);

   strrev(string);
  
   printf("\n\n Reverse String Is:\t");
   puts(string);

   return 0;
}
