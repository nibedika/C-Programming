#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter two number :");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
        {
            printf("The maximum value x=%d",x);
        }
        else
        {
            printf("The maximum value z=%d",z);
        }
    }
    else if(y>x)
    {
        if(y>z)
        {
            printf("The maximum value y=%d",y);
        }
        else
        {
            printf("The maximum value z=%d",z);
        }
    }
    else
    {
        printf("The maximum value z=%d",z);
    }

}
