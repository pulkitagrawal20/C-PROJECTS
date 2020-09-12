//sum of first n natural numbers:
#include<stdio.h>
void main()
{ int num=0,sum;
    printf("Enter the last digit for which u want the sum for:");
    scanf("%d",&num);
    sum=(num*num +num)/2;
    printf("The sum for %d is %d",num,sum);
    return 0;
}