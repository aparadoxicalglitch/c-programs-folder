#include<stdio.h>
#include<math.h>
 int main()
{
    int a,b;
    float v=0;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    v = pow(a,b);
    printf("The exponention of a is= %f",v);
    return 0;
}