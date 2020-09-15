//swapping two numbers without using third number:
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter the numbers");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swapping no. are %d and %d",num1,num2);
    return 0;
}