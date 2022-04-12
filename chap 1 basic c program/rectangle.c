#include<stdio.h>

 int main()
{
    int l,b,p=0, a=0;
    printf("Enter the value of l\n");
    scanf("%d", &l);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    p= 2 * (l+b) ;
    a= l*b;
    printf("The perimeter of the rectangle = %d \n", p);
    printf("The area of the rectangle = %d \n", a);
    return 0;
}