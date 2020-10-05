#include<stdio.h>
int reversedstarpattern(int rev)
{
     int i,j;
    for(i=0;i<=rev;i++)
    {
        for(j=0;j<=rev-i-1;j++)
        {
            printf("*");
    }
        printf("\n");
    }
    
}
void starpattern(int rev)
{
    int i,j;
    for(i=0;i<rev;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
    }
        printf("\n");
    }

}
int main()
{ 
    int rev,type;
    printf("enter 0 for reversed star pattern and 1 for star pattern\n");
    scanf("%d",&type);
    printf("Enter the number of rows you want to print\n");
    scanf("%d",&rev);
    switch(type)
    {
    case 0:
         reversedstarpattern(rev);
         break;

    case 1:
        starpattern(rev);
        break;

     default:
        printf("Please enter a valid choice%d\n");
        break;
        
    }
    return 0;
}