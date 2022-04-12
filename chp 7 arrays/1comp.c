/*C - Program to compare two integer numbers 
using pointers.*/

#include <stdio.h>
int main(){
	int a,b;
	int *pa,*pb;
	
	pa=&a; pb=&b;
	
	printf("Enter first integer: ");
	scanf("%d",pa);
	printf("Enter second integer: ");
	scanf("%d",pb);
	
	//compare 
	if(*pa==*pb)
		printf("Integers are equal.\n");
	else
		printf("Integers are not equal.\n");
	
	return 0;
}