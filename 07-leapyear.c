//finding the Leap year:
#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year % 400==0) 
    {
        printf("this year is a Leap year");
    }
    else if((year % 100 !=0) && (year % 4==0))
    {
        printf("this year is a leap year");
    }
    else
    {
        printf("this is not a leap year");
    }
    
    
}