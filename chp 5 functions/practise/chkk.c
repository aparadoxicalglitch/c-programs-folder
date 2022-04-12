#include<stdio.h>

 int main()
{ int n=4;
printf("%d",n-1);
     for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}