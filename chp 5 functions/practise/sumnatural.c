#include<stdio.h>
int sum (int n);

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The sum = %d", sum(n));
    return 0;
}

int sum (int n)
{   // printf("Calling sum(%d)\n", n);
   if (n!=0){return n+sum(n-1);}
   else
   return n;
}