#include<stdio.h>

 int main()
{
    int rat ;
    printf("Enter your rating (1-5)\n");
    scanf("%d", &rat);
    switch(rat)
    {
        case 1: 
        printf("rating : very diassapointed\n");
        break;
        case 2:
        printf("rating : disaapointed \n");
        break;
        case 3:
        printf("rating : good \n");
        break;
        case 4:
        printf("rating : very good\n");
        break;
        case 5:
        printf("rating : excellent \n");
        break;
        default :
        printf("Invalid rating!\n");

    }
    return 0;
}