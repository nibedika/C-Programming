#include<iostream>
using namespace std;
class Simple
{
    float a,b;
public:
    void read()
    {
        cout<<"\nEnter the First Number : ";
        cin>>a;
        cout<<"\nEnter the Second Number : ";
        cin>>b;
    }
    friend class Sum;
};
class Sum
{
public:
    float c;
    void add(Simple rd)
    {
        c=rd.a+rd.b;
        cout<<"\nSum="<<c;
    }
};
int  main()
{
    int cont;
    Simple rd;
    Sum s;
    rd.read();
    s.add(rd);
    return 0;
}
