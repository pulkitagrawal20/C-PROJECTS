//program to print arithematic operations
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter any two number:\n");
    scanf("%d%d",&a,&b);
    printf("sum of given numbers is%d \n",a+b);
    printf("subtract of given number is%d \n",a-b);
    printf("multiplication of the given number is%d \n",a*b);
    printf("The division of given numbers is %d\n", a/b);
    printf("The remainder of first by second number is %d", a%b);

    getch();
}