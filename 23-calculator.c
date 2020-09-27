#include<stdio.h>
void main()
{ 
    int x,y;
    char operation;
    printf("Enter first digit:\n");
    scanf("%d",&x);
    printf("Enter second digit:\n");
    scanf("%d",&y);
    getchar();
    printf("Enter the operation you want,+,-,*,/,%%\n");
    scanf("%c",&operation);
    switch(operation)
    {
        case '+':printf("%d",x+y);
        break;
        case '-':printf("%d",x-y);
        break;
        case '*':printf("%d",x*y);
        break;
        case '/':printf("%f",(float)x/y);
        break;
        case '%':printf("%d",x%y);
        break;
        default:
        printf("enter valid operator:");
        break;
    }
    return 0;
}