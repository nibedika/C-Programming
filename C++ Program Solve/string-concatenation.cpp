#include<iostream>
#include<cstdio>
#include<cstring>
#define MAX 50
using namespace std;
class string
{
    char str[MAX];
public:

    void operator+=(string s1);
    void operator==(string s1);
    void operator=(string s1);

    string()
    {
        strcpy(str," ");
    }
    string(char s[])
    {
        strcpy(str,s);
    }
};

void string::operator+(string s1)
{
    if(strlen(str)+strlen(s1.str)<MAX)
    {
        strcat(str,s1.str);
        cout<<"\n\nConcatinated string is: "<<str;
    }
    else
    {
        cout<<"\n\nSorry the array size is exceeded.";
    }
}

void string::operator==(string s1)
{
    if(strcmp(str,s1.str)==0)
        cout<<"\n\nStrings are equal.";
    else
        cout<<"\n\nStrings are not equal.";
}

void string::operator=(string s1)
{
    strcpy(str,s1.str);
    cout<<"\n\nCopy of string is: "<<str;
}

int main(){
    string s1,s2;
    int choice;
    char ans;

    do{
        cout<<"\n1.Concatination of string\n2.Equal\n3.Copy string\n";
        cout<<"\n\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"\n\nEnter the first string: ";
            cin>>s1;
            cout<<"\n\nEnter the second string: ";
            cin>>s2;
            s1+s2;
            break;

        case 2:
            cout<<"\n\nEnter the first string: ";
            cin>>s1;
            cout<<"\n\nEnter the second string: ";
            cin>>s2;
            s1==s2;
            break;

        case 3:
            cout<<"\n\nEnter the string: ";
            cin>>s1;
            s2=s1;
            break;

        default:
            cout<<"\n\nPlease enter correct choice.";
            break;
        }
        cout<<"\n\n\nDo you want to continue?(y/n): ";
        cin>>ans;
    }while(ans=='y' || ans=='Y');
}


