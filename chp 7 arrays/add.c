// C program to illustrate pointer Addition 
#include <stdio.h> 
  
// Driver Code 
int main() 
{ 
    // Integer variable 
    int n = 4; 
  
    // Pointer to an integer 
    int *p1, *p2; 
  
    // Pointer stores the address of N 
    p1 = &n; 
    p2 = &n; 
  
    printf("Pointer ptr2 before Addition: "); 
    printf("%p \n", p2); 
  
    // Addition of 3 to ptr2 
    p2 = p2 + 3; 
    printf("Pointer ptr2 after Addition: "); 
    printf("%p \n", p2); 
  
    return 0; 
} 