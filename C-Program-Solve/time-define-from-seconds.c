#include<stdio.h>
#include<math.h>
int main()
{
    int n,year,month,day;
    printf("Enter any value :");
    scanf("%d",&n);
    year=n/365;
    month=(n%365)/30;
    day=((n%365)%30);
    printf("%d Year\n",year);
    printf("%d Month\n",month);
    printf("%d Day",day);

}
