#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
public:
    Complex()                         //Default Constructor.
    {
    }
    Complex(int r)                // Parameterised constructor for equal values.
    {
        real=r;
        imag=r;
    }
    Complex(int r,int i)       // Parameterised constructor for different values.
    {
        real=r;
        imag=i;
    }
    Complex(Complex &c)       //Copy Constructor.
    {
        real=c.real;
        imag=c.imag;
    }
    void print()
    {
        cout<<"\n The sum of two complex nos. is "<<real<<"+"<<imag<<"i.";
    }
    friend Complex sum(Complex,Complex);     //Declaration of friend function.
};
Complex sum(Complex obj1,Complex obj2)
{
    Complex obj3;
    obj3.real=obj1.real+obj2.real;
    obj3.imag=obj1.imag+obj2.imag;
    return obj3;
}
int  main()
{
    int a,b,c;
    Complex c1;                      //Calling default constructor.
    cout<<"\n\t\tPROGAM TO PERFORM ADDITION OF TWO COMPLEX NUMBERS USING CONSTRUCTOR OVERLOADING\t\t\n";
    cout<<"\n\t\tFor equal values :\t";
    cout<<"\n\tEnter the equal value of real and imaginary part of number 1:\n\t";
    cin>>a;
    Complex c2(a);                //Calling parameterised constructor for equal values.
    cout<<"\n\t\tFor different values :\t";
    cout<<"\n\tEnter the real and imaginary part of number 2:\n\t";
    cin>>b>>c;
    Complex c3(b,c);                         //Calling parameterised constructor for different values.
    Complex c4=sum(c2,c3);          //Calling copy constructor.
    c4.print();
    return 0;
}

