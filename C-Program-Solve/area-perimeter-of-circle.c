#include<stdio.h>
#define PI 3.1416
int main()
{
    int radius;
    float area,perimeter;
    printf("Enter the value of radius :\n");
    scanf("%d",&radius);
    area=PI*radius*radius;
    perimeter=2*PI*radius;
    printf("Area = %f\n",area);
    printf("Perimeter = %f",perimeter);
    return 0;
}
