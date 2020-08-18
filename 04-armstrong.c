//program to identify an armstrong number:
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int num,temp,copy,count=0,ans=0;
    printf("Enter a number");
    scanf("%d",&temp);
    copy=temp;
    while(copy!=0)
    {
        copy=copy/10;
        count++;
    }
    copy=temp;
    while(copy!=0)
    {
        num=copy%10;
        ans=ans+pow(num,count);
        copy=copy/10;
    }
    if(ans==temp)
    {
        printf("Yes this is an armstrong number %d",count);
    }
    else
    {
        printf("No its not an armstrong number %d",count);
    }
}   