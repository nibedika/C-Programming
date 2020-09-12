#include<stdio.h>
#include<string.h>
struct student
{
    char Name[100];
    char Address[100];
    char School[100];
    char University[100];
    int Roll;
    int Reg;
    float Mark;
    double GPA;
};
struct student T;
int main()
{
    printf("Enter the information of a student :");
    scanf("%s%s%s%s%d%d%f%lf",T.Name,T.Address,T.School,T.University,&T.Roll,&T.Reg,&T.Mark,&T.GPA);
    printf("%s\n%s\n%s\n%s\n%d\n%d\n%f\n%lf",T.Name,T.Address,T.School,T.University,T.Roll,T.Reg,T.Mark,T.GPA);
    return 0;
}
