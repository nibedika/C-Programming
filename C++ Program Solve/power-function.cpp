#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
double power(double m,int n=2)
{
    double t;
    t=pow(m,n);
    return t;
}
int  main()
{
    double num,ans;
    int p;
    cout<<"Enter the number: \n";
    cin>>num;
    cout<<"\nEnter the power:";
    cin>>p;
    if(p==0)
    {
        ans=power(num);
        cout<<"\nPower of "<<num<<" is "<<ans<<endl;
    }
    else
    {
        ans=power(num,p);
        cout<<p<<" Power of "<<num<<" is "<<ans<<endl;
    }
    return 0;
}
