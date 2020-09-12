#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter a number :");
    scanf("%d",&n);
    {
        if(i==0||i==1)
        {
            printf("The factorial value is :1");
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                f=f*i;
            }
            printf("The factorial value is :%d",f);
        }
    }
}
