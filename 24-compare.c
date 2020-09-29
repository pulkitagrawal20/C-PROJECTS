//comparing two numbers using conditional operator:
#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter first number");
    scanf("%d",&n1);
    printf("Enter second number");
    scanf("%d",&n2);
    n1==n2?printf("Both are equal numbers:"):(n1>n2?printf("first number is bigger"):printf("second number is bigger"));
    return 0;
}