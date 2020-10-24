#include<stdio.h>
int func(int arr[])
{
    for(int i=0;i<4;i++)
    {
        printf("the value of %d is %d\n",i,arr[i]);
        
    }
    arr[1]=5;
    return 0;
}
void main()
{int arr[]={1,2,3,4};

func(arr);
 printf("the value after changing of is %d\n",arr[1]);
    return 0;
}