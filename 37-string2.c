//to print two entered strings:
#include<stdio.h>
#include<string.h>
int main()
{
   char str1[10],str2[15];
   printf("Enter your name\n");
   gets(str1);
   printf("Enter your surname\n");
   gets(str2);

   printf("Entered name is:\n");
   puts(str1);
   printf("Entered username is:\n");
   puts(str2);
   return 0; 
}