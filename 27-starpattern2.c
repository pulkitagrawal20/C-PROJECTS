//reversed triangle star pattern:
#include<stdio.h>
void main()
{ 
     int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5-i-1;j++)
        {
            printf("*");
    }
        printf("\n");
    }
    return 0;
}