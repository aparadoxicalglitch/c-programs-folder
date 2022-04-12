#include<stdio.h>
void change(int b);

int main(){
    int b = 344;
    printf("The value of b before change is %d\n", b);
    change(b);
    printf("The value of b after change is %d\n", b);
    return 0;   // it will remain same as both functions are different
}

void change(int b){
    b = 77;
}