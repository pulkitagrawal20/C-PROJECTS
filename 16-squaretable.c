//program to print sqaure table upto a given number:
#include<stdio.h>
int main()
{
    int number, i = 1;

    printf("Please enter a number\n");
    scanf("%d", &number);

    printf("The square table upto given number is as follows...\n");

    for(int i = 1; i <= number; i++)
    {
        printf("%d * %d = %d\n", i, i, i*i);
    }
   return 0; 
}