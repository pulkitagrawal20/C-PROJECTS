//program to reverse a given number:
#include<stdio.h>
void main()
{
    int reversed=0,num;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        reversed=reversed*10+num%10;
        num=num/10;
    }
    printf("the reversed number is %d",reversed);


}