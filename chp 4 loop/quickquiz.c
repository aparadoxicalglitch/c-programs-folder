#include<stdio.h>

 int main()
{
    int i=0, n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for (int i = n; i; i--)
    printf("The value of i is %d\n", i);
   // printf("\n");
    return 0;
}