#include<stdio.h>
void tentimes(int a, int *m );

 int main()
{
    int x;
    printf("Enter a positive integer:");
    scanf("%d", &x);
    int m; tentimes(x , &m);
    
    printf("The value : %d\n", m);
    
    
    return 0;
}
void tentimes(int a, int *m)
{
    *m = 10 *a;
   //return m;
}