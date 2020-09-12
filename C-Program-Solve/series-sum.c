#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter the value of n :");
    scanf("%f",&n);
    for(i=1; i<=n; i+=1)
    {
        sum=sum+1.0/i;
    }
    printf("%d\n",sum);
    return 0;
}
