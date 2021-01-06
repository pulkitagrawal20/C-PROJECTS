//To print an entered array:
#include<stdio.h>

void main(){
    int arr1[2][3], i, j;

    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("Enter the a%d and a%d element of array\n", i, j);
            scanf("%d", &arr1[i-1][j-1]);
        }
    }

    printf("Your array is:\n");

    for(j = 1; j <= 3; j++)
    {
        for (i = 1; i <= 2; i++)
        {
            printf("%d ", arr1[i-1][j-1]);
        }
        printf("\n");
    }
}