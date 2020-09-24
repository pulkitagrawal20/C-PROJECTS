//program to find a vowel using switch case:
#include<stdio.h>
void main()
{
    char alphabet;
    printf("Enter the alphabet:");
    scanf("%c",&alphabet);
    switch(alphabet)
    {
        case 'e':
        case 'a':
        case 'i':
        case 'o':
        case 'u':
        printf("this is a vowel:");
        break;

        default:
        printf("this is a consonant not a vowel");
        break;

    }
    return 0;
}