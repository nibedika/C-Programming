#include<stdio.h>
#include<string.h>
main()
{
    char f[100];
    int i;
    printf("Enter a sting:");
    scanf("%s",f);
    for(i=strlen(f)-1; i>=0; i--)
    {
        printf("%c",f[i]);
    }
    return 0;
}
