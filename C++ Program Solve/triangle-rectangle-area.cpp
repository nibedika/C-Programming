#include<iostream>
using namespace std;
 class Shape
 {
     protected:
    double l,b;
    public:
    void getdata()
    {
        cout <<"Input First Value: ";
        cin >>l;
        cout <<"Input Second Value: ";
        cin >>b;

    }
        void virtual display_area()=0;
 };
 class triangle:public Shape
 {
     public:
    void display_area()
    {
        cout<<"\nArea of Triangle:"<<(0.5*l*b)<<endl<<endl;
    }
 };
 class Rectangle:public Shape
 {
     public:
    void display_area()
    {
        cout<<"\nArea of Rectangle:"<<l*b<<endl;
    }
 };
 int  main()
 {
    Shape * s1;
    triangle t1;
        s1=&t1;
        cout <<"For Triangle\n";
    s1->getdata();
    s1->display_area();

    Rectangle r1;
    s1=&r1;
    cout <<"For Rectangle\n";
    s1->getdata();
    s1->display_area();
    return 0;
 }
