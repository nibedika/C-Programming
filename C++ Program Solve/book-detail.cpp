#include<iostream>
using namespace std;
#include<cstdio>
class First
{
int book_no;
char book_name[50];
public:
	void getData()
	{
		cout<<"\nEnter Book No. ";
		cin>>book_no;
		cout<<"\nEnter Book name: ";
		cin>>book_name;
	}
	void putData()
	{
		cout<<"\nBook No.  : "<<book_no;
		cout<<"\nBook Name : "<<book_name;
	}
};
class Second
{
	char author[25];
	char publisher[25];
public:
	void takeDate()
	{
		cout<<"\nEnter Author: ";
		cin>>author;
		cout<<"\nEnter Publisher: ";
		cin>>publisher;
	}
	void showData()
	{
		cout<<"\nAuthor    : "<<author;
		cout<<"\nPublisher : "<<publisher;
	}
};
class Third:public First,public Second
{
	int page_number;
	int year;
public:
	void in()
	{
		getData();
		takeDate();
		cout<<"\nEnter number of pages: ";
		cin>>page_number;
		cout<<"\nEnter Release year  : ";
		cin>>year;
	}
	void out()
	{
		putData();
		showData();
		cout<<"\nNumber of pages: "<<page_number;
		cout<<"\nRelease Year   : "<<year;
	}
};
main()
{

	Third t[5];
	int i,n;
	cout<<"No. of details to be entered: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		t[i].in();
	}
	for(i=0;i<n;i++)
	{
		cout<<"\nDETAIL NO. "<<i+1;
		t[i].out();
	}

	return 0;
}

