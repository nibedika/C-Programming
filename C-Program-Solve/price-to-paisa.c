#include<stdio.h>
int main()
{
    float price;
    printf("Enter the price :");
    scanf("%f",&price);
    printf("The price is %.00f Taka\t",price);
    printf("%.2f paisa",price);
}
