#include<iostream>
using namespace std;
class Student
{
    int m;
    int r;
    string name;
public:
    void getdata(int a,int b,string C);
    void putdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<r<<endl;
        cout<<"Mark:"<<m<<endl;
    }
};
void Student::getdata(int a,int b,string C)
{
    m=a;
    r=b;
    name=C;
}
main()
{
    Student info;
    info.getdata(50,102,"Nibedika");
    info.putdata();
}
