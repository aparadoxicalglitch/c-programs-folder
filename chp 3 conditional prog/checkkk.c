#include <stdio.h>

int main()
{
    int age; int vp=1;// vp=1;
    printf("Enter your age\n");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || ! (vp==0))
    {
        printf("You can drive\n");
        if (age >= 60 && age <= 70)
        {
            printf("But you should rest at home");
        }
        else
        {
           // printf("you should rest at home");
        }
    }
    else
    {
        printf("You cant drive , you should rest at home\n");
    }
    return 0;
}