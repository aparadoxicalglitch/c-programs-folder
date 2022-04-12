#include<stdio.h>

int main(){
    int i = 57;
    int *j = &i; // j will now store the address of i
    int **k ;
    k = j; 
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));
    printf("The value of i is %u\n",*(&i));
    printf("The value of j is %d\n",**k);
    return 0;
}