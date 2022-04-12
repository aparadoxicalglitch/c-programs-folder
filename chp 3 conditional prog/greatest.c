#include<stdio.h>

 int main()
{
    int n1,n2,n3,n4,g=0;

    printf("enter num1\n");
    scanf("%d", &n1);

     printf("enter num2\n");
    scanf("%d", &n2);

     printf("enter num3\n");
    scanf("%d",& n3);

     printf("enter num4\n");
    scanf("%d",&n4);

    if(n1>n2&& n1>n3 && n1>n4)
    {
    printf(" %d is the greater of them all\n", n1);
    }
    if(n2>n1&& n2>n3 && n2>n4)
    {
    printf(" %d is the greater of them all\n", n2);
    }
   if(n3>n1&& n3>n2 && n3>n4)
    {
    printf(" %d is the greater of them all\n", n3);
    }
   if(n4>n1&& n4>n2 && n4>n3)
    {
    printf(" %d is the greater of them all\n", n4);
    } 

    return 0;
}