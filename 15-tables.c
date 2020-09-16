//program to print the table of a givem number:
#include<stdio.h>
void main()
{ 
    int number,table;
    printf("Enter a number of which u need a table:\n");
    scanf("%d",&number);
    printf("The multiplication table of %d is:\n",number);
    for(int i=1;i<=10;i++)
    {
        table=number*i;
        printf("%d*%d=%d\n",i,number,table);
        
    }
    return 0;
}