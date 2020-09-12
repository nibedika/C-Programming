#include<stdio.h>
main()
{
    char ch;
    printf("Enter a value");
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("It is a upper letter");
    }
    if(islower(ch))
    {
        printf("It is a lower letter");
    }
}
