//print two strings as one:
#include<stdio.h>
#include<string.h>
int main()
{
   char str1[]="HELLO ";
   char str2[]={'W','O','R','L','D','\0'};
   printf("%s%s",str1,str2);
   return 0; 
}