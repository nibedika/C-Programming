#include<stdio.h>
int add(int n1,int n2)
{
    int r1;
    r1=n1+n2;
    printf("The sumation value is :%d\n",r1);
    return 0;
}
int sub(int n1,int n2)
{
    int r2;
    r2=n1-n2;
    printf("The subtraction value is :%d\n",r2);
    return 0;
}
int mul(int n1,int n2)
{
    int r3;
    r3=n1*n2;
    printf("The sumation value is :%d\n",r3);
    return 0;
}
int div(int n1,int n2)
{
    int r4;
    if(n1==0)
    {
        printf("MATH ERROR");
    }
    else
    {
        r4=n1/n2;
        printf("The division value is :%d\n",r4);
    }
    return 0;
}
int main()
{
    int a,b;
    printf("Enter two value :");
    scanf("%d%d",&a,&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
}

