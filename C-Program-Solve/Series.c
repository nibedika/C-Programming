#include<stdio.h>
main()
{
    int f[100],n,i;
    printf("Enter a number: "),
    scanf("%d",n);
    for(i=1; i<n; i++)
    {
        f[i]=f[(i-1)*(i-1)]+f[(i-2)*(i-2)];
    }
    printf("The series is : ",n);
    for(i=1; i<n; i++)
    {
        printf("%d",f[i]);
    }
    return 0;
}
