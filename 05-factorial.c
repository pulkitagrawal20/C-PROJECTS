//to find the factorial of a given number:
#include<conio.h>
#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
if(n==0)
{
    fact==1;
}
else
{
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
}
printf("the factorial of given number is %d",fact);
}
