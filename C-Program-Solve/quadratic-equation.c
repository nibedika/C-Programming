#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r1,r2;
    printf("Please enter the value of a,b,c :");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d<0)
    {
        printf("\nRoots are imaginary.");
    }
    else
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nRoot1 =%5.2f\nRoot2 =%5.2f",r1,r2);
    }
}
