//program to print fibonacci series:
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,t1=0,t2=1,nextterm;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
    printf("Fibonacci series of the given number is:");
    for(i=1;i<=n;i++)
    {
        printf("%d",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}