//addition of given matrices:
#include<stdio.h>
int main()
{ 
    int arr1[2][3],arr2[2][3],i,j;
    printf("Enter the first matrix:\n");
     for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("Enter the a %d and%d element of array\n", i, j);
            scanf("%d", &arr1[i-1][j-1]);
        }
    }
    printf("Enter the second matrix:\n");
     for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("Enter the a %d and%d element of array\n", i, j);
            scanf("%d", &arr2[i-1][j-1]);
        }
    }
    printf("The addition of given two matrices is;\n");
     for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d", arr1[i-1][j-1]+arr2[i-1][j-1]);
        }
        printf("\n");
    }

   return 0; 
}