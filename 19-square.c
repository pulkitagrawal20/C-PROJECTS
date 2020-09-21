//program to print square of a given number:

#include<stdio.h>

int square_in(int);
void main()
{    
    int num;
    
    printf("Enter a number\n");
    scanf("%d",&num);
    
    printf("The square of %d is %d", num, square_in(num));
}

int square_in(int x)
{
    return x*x;
}