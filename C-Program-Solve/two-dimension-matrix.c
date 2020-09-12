#include<stdio.h>
int main()
{
    int num[3][2]={{3,2},{4,8},{8,9}};
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
}
