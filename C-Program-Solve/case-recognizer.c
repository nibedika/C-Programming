#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(islower(x))
    {
        printf("%c is lower letter.",islower(x));
    }
    if(isupper(x))
    {
        printf("%c is upper letter.",isupper(x));
    }
    return 0;
}
