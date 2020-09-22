//operation using logical operators:
#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age to check vote eligibility:");
    scanf("%d",&age);
    age==0?printf("you are not born yet"):(age>=18?printf("You are eligible for vote"):printf("you are not eligible for vote you have to wait %d years",age=18-age));
    return 0;
}