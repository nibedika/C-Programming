#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    if(islower(x))
    {
        printf("The covert Letter :%c\n",toupper(x));
    }
    else if(isupper(x))
    {
        printf("The covert Letter :%c\n",tolower(x));
    }
    return 0;
}
