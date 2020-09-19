//program to check positive or negative number:
#include<stdio.h>
void main()
{ 
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    num==0?printf("Neighter negative nor positive"):(num<0?printf("this number is negative"):printf("this number is positive"));
    return 0;
}