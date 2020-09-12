#include<iostream>
using namespace std;
#include<cstdio>
class Student
{
    int roll_no;
    char name[25];

public:
    void input()
    {
        cout<<"\nEnter name: ";
        gets(name);
        cout<<"\nEnter roll no: ";
        cin>>roll_no;
    }
    void output()
    {
        cout<<"\nNAME     : "<<name;
        cout<<"\nROLL NO. : "<<roll_no;
    }
};
class Exam: public Student
{
    float marks[6];
public:
    void indata();
    float add();
};
void Exam::indata()
{
    int i;
    input();
    cout<<"\nEnter marks in six subjects (out of 100):\n";
    for(i=0; i<6; i++)
    {
        cin>>marks[i];
    }
}
float Exam::add()
{
    int i=0;
    float sum=0;
    for(i=0; i<6; i++)
    {
        sum=sum+marks[i];
    }
    return sum;
}

class Result: public Exam
{
    float totalmarks;
    float percentage;
public:
    void display()
    {
        totalmarks=add();
        percentage=totalmarks/6;
        output();
        cout<<"\nTotal Marks: "<<totalmarks<<"/600";
        cout<<"\nPercentage : "<<percentage<<"%";
    }
};
main()
{

    Result r;
    r.indata();
    r.display();

    return 0;
}
