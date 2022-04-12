#include <stdio.h>

int main()
{
    int *ptrA;
    float *ptrB;
    
    ptrA = (int *)3000;
    ptrB = (float *)2000;
    
    if(ptrB > ptrA)
       printf("PtrB is greater than ptrA");
     else  
     printf("PtrA is greater than ptrB");
    
    return(0);
}