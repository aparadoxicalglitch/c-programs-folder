#include<stdio.h>
int factorial(int x);

int main(){
    int a = 7;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}

int factorial(int x){
   // printf("Calling factorial(%d)\n", x);
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);     
    }
}
/* if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1; */