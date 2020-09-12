#include<stdio.h>
int main()
{
    int i=1;
    while(i<=50)
    {
        if(i%2==0)
        printf("Even=%d\n",i);
        else
        printf("Odd=%d\n",i);
        i++;
    }
    return 0;
}
