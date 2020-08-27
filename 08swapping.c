//swapping using functions:
# include<stdio.h>
# include<stdlib.h>
int swap(int *a,int *b)
{int temp;
temp=*a;
*a=*b;
*b=temp;   
}
int main()
{
    int x=4,y=5;
    printf(" Before swapping %d and %d\n",x,y);
    swap(&x,&y);
      printf("After swapping %d and %d",x,y);
      return 0;
}
