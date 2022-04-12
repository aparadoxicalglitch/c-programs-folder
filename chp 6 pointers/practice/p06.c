#include<stdio.h>
int tentimes(int a);

 int main()
{
    int x;
    printf("Enter a positive integer:");
    scanf("%d", &x);
    printf("The value before : %u\n", x);

    int m = tentimes(x);
    
    printf("The value : %d\n", m);
      printf("The value after : %u\n", x);
    
    
    return 0;
}
int tentimes(int a)
{
    int m= 10* a;
    return m;
}