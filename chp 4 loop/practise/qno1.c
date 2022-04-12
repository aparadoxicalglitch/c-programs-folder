#include <stdio.h>

int main()
{
    int num, n = 1, tb = 0;
    printf("Enter the number you want multiplication table of :");
    scanf("%d", &num);
    printf("The table of %d is\n", num);
    do
    {
        tb = num * n;
        printf(" %d \n", tb);
        n++;
    } while (n <= 10);
    return 0;
}   // by using for loop , for (n = 1; n <= 10; ++n)