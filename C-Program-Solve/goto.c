// Goto statement example

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    {
        if(age>=18)
            goto Vote;
        else
            goto NoVote;
    }

    Vote:{
        printf("you are eligible for voting");
    }
    NoVote:{
        printf("you are not eligible to vote");
    }
    return 0;
}
