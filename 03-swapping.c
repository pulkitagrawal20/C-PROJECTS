//swapping of two numbers:
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("before swapping a=%d and b=%d\n",a,b);

    int swap=a;
    a=b;
    b=swap;
    printf("after swapping a=%d and b=%d",a,b);
}