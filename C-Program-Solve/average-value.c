 #include<stdio.h>
 int main()
 {
     float n,sum=0,avg;
     printf("Enter the value of n:");
     scanf("%f",&n);
     sum=n*(n+1)/2;
     avg=sum/n;
     printf("The average of n is %f:",avg);
     return 0;
 }
