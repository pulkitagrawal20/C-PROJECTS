//program to check a palindrome number:
#include<stdio.h>
#include<stdlib.h>
int palindrome(int num)
{
    int reversed=0;
    int originalnumber=num;
    while(num!=0)
    {
        reversed=reversed*10+num%10;
        num=num/10;
    }
    printf("the reversed number is %d\n", reversed);
    if (originalnumber==reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter a number to check whether it is palindrome or not:");
    scanf("%d",&number);
    if(palindrome(number))
    {
        printf("yes its a palindrome number:");
    }
    else
    {
        printf("no its not a palindrome number:");
    }
    return 0;
}
