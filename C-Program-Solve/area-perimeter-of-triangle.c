#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area,perimeter;
    printf("Enter the three sides of triangle :");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=(s*(s-a)*(s-b)*(s-c));
    perimeter=a+b+c;
    printf("\nArea of the triangle is :%f\n",area);
    printf("\nPerimeter of the triangle is :%f\n",perimeter);
    return 0;
}
