#include <stdio.h>
void display(); // function prototype

int main()
{
    int a = 5;
    printf("Your number is %d\n", a);
    display(); // function call
}
void display()   // function definition
{ 
    printf("Hey there");
}