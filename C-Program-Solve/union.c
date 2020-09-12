#include<stdio.h>
#include<string.h>
union student
{
    char Name[100];
    char Address[20];
    char School[15];
    char University[10];
    int Roll;
    int Reg;
    float Mark;
    double GPA;
};
union student T;
int main()
{
    printf("Enter the information of a student :\n");
    //scanf("%s%s%s%s%d%d%f%lf",T.Name,T.Address,T.School,T.University,&T.Roll,&T.Reg,&T.Mark,&T.GPA);
    //printf("%s\n%s\n%s\n%s\n%d\n%d\n%f\n%lf",T.Name,T.Address,T.School,T.University,T.Roll,T.Reg,T.Mark,T.GPA);
    scanf("%s",T.Name);
    printf("%s\n",T.Name);
    scanf("%s",T.Address);
    printf("%s\n",T.Address);
    scanf("%s",T.School);
    printf("%s\n",T.School);
    scanf("%s",T.University);
    printf("%s\n",T.University);
    scanf("%d",&T.Roll);
    printf("%d\n",T.Roll);
    scanf("%d",&T.Reg);
    printf("%d\n",T.Reg);
    scanf("%f",&T.Mark);
    printf("%f\n",T.Mark);
    scanf("%lf",&T.GPA);
    printf("%lf\n",T.GPA);
    return 0;
}
