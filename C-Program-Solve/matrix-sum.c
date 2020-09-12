#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],i,j,p,q;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("x[i][j]");
        }
    }
    for(p=0; p<3; p++)
    {
        for(q=0; q<3; q++)
        {
            printf("y[p][q]");
        }
    }
    printf("The given value is are :\n\n");
        for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("x[i][j]");
        }
        printf("\n");
    }
    printf("\n\n");
    for(p=0; p<3; p++)
    {
        for(q=0; q<3; q++)
        {
            printf("y[p][q]");
        }
        printf("\n");
    }
    printf("The result are :\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("x[i][j]+y[p][q]");
        }
        printf("\n");
    }
}
