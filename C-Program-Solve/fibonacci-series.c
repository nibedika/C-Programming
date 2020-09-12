#include<stdio.h>
int main()
{
    int f[20],n,i;
    f[0]=0;
    f[1]=1;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    printf("The fibonacci series is :",n);
    for(i=0; i<n; i++)
    {
        printf("%d\t",f[i]);
    }

}
