#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character :");
    scanf("%c",&x);
    if(x=='A'||x=='a'||x=='E'||x=='e'||x=='I'||x=='i'||x=='O'||x=='o'||x=='U'||x=='u')
    {
        printf("The given letter is vowel.");
    }
    else
    {
        printf("The given letter is consonant.");
    }
    return 0;
}

