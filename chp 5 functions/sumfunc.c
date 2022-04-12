#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration

int main()
{
    int c,d;
    c = sum(2, 15); // function call
    printf("The value of c is %d\n", c);
    d = sum(45, 55); // function call
    printf("The value of d is %d\n", d);

    return 0;
}

int sum(int a, int b)  // function definition
{
    int c;              // c here is not related to c used in above function it can be same
    c = a + b;
    return c;
}