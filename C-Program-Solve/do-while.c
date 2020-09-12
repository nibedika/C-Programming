#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        if(i%2==0)
        printf("Even=%d\n",i);
        else
        printf("Odd=%d\n",i);
        i++;
    }while(i<=50);
    return 0;
}

