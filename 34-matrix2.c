//print multiplication of two matrices:
#include<stdio.h>
int main()
{ 
    int arr1[2][3],arr2[3][2],i,j,arr3[2][2];
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
     for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            printf("Enter the a %d and%d element of array\n", i, j);
            scanf("%d", &arr2[i-1][j-1]);
        }
    }
     for (i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            arr3[i][j] = 0;
			for(int k=0 ; k<3 ; k++)
            {
				arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    
    printf("The multiplication of given two matrices is;\n");
     for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            printf("%d",arr3[i-1][j-1]);
        }
        printf("\n");
    }

   return 0; 
}