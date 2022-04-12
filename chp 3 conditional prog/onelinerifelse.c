#include<stdio.h>

 int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    // ternory operator
    (a>=10) ? printf (" a is greater than 10  ") : printf("a is less than 10 ");
    return 0;
}