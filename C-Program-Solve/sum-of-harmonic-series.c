#include<stdio.h>
int main()
{
    int n,i;
    float sum;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+1.0f/i;
        printf("%.2f\n",i);
    }
    printf("Sum of harmonic series is :%.2f",sum);
    return 0;
}
