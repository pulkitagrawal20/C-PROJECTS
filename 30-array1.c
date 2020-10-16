//PROGRAM TO PRINT LESS ELEMENTS OF AN ARRAY
#include<stdio.h>
int main()
{
    int array[10];
    for(int i=1;i<=7;i++)
    {
        printf("enter the %d element of array\n",i);
        scanf("%d",&array[i]);
    }
    printf("your array is...\n ");
    for(int i=1;i<=10;i++)
    {
        printf("The %d element  of array is %d:\n",i,array[i]);
    }
    printf(":Rest of the elements are garbage values:");
   return 0; 
}