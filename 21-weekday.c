//program to print week day name:

#include<stdio.h>
void main()
{ 
    int num;
    printf("Enter the number of day for which you want to know the name:");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("This is monday:");
        break;
        case 2:
        printf("This is tuesday:");
        break;
        case 3:
        printf("This is wednesday:");
        break;
        case 4:
        printf("This is thursday:");
        break;
        case 5:
        printf("This is friday:");
        break;
        case 6:
        printf("This is saturday:");
        break;
        case 7:
        printf("This is sunday:");
        break;
        default:
        printf("Enter correct week day number:");
        break;

    }
    return 0;
}