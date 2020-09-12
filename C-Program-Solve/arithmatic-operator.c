#include<stdio.h>
int main()
{
    int A,b,sum,sub,mul,div;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("%d+%d=%d\n",a,b,sum);
    printf("%d-%d=%d\n",a,b,sub);
    printf("%d*%d=%d\n",a,b,mul);
    printf("%d/%d=%d\n",a,b,div);
    return 0;
}
