#include<stdio.h>
int main()
{  
     float a=10;
     float* p=&a;
    printf("%u\n",p);
     p=p+3;
     printf("%u",p);
}