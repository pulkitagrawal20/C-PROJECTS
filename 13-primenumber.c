#include<stdio.h>
void main()
{ int a,b;
printf("Enter a natural number:");
scanf("%d",&a);
if(a==1)
{
    printf("neighter prime nor composite:");
}
else if(a==2)
{
    printf("2 is the only even and smallest prime number exists:");
}
else if(a>2)
{
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            b=0;
            break;
        }
    }
    b==0?printf("This is not a prime number"):printf("this is a prme number:");
}
else
{
    printf("Enter a valid natural number:");
}

    return 0;
}