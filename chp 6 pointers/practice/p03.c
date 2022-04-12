#include<stdio.h>
int tentimes(int *a);

 int main()
{
    int x;
    printf("Enter a positive integer:");
    scanf("%d", &x);
    int m = tentimes(&x);
    
    printf("The value : %d\n", m);
    
    
    return 0;
}
int tentimes(int *a)
{
    int m= 10 *(*a);
    return m;
}