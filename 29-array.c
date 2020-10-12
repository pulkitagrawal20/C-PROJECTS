//program to print sum and average of elements present in an array:
#include<stdio.h>
int main()
{
    int array[10],average,sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter the %d element of array\n",i+1);
        scanf("%d",&array[i]);
    }
    printf("your array is:\n");

    for(int i=0;i<10;i++)
    {
        sum=sum+array[i];
    }
    average=sum/10;
    printf("the sum is %d and average is %d",sum,average);



}