#include<iostream>
using namespace std;
class B; //declare class B
class A
{
public:
    int firstNumber;
    friend int max(A a, B b);
};
class B
{
public:
    int secondNumber;
    friend int max(A a, B b);
};
int max(A a, B b)
{
    if(a.firstNumber>b.secondNumber)
        return a.firstNumber;
    else
        return b.secondNumber;
}

int main()
{
    A a;
    B b;
    cout <<"Please input first number:";
    cin >>a.firstNumber;
    cout << endl <<"Please input second number:";
    cin >>b.secondNumber;
    cout << "Greatest is : " << max(a, b);
    return 0;
}
