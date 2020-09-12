#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    if(isdigit(x))
    {
        printf("This is digit.");
    }
    if(isalpha(x))
    {
        printf("This is alphabet.");
    }
    if(isalnum(x))
    {
        printf("This is special character.");
    }
    return 0;
}

