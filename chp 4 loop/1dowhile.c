// Qno. print first n natural no.using do while
#include<stdio.h>

 int main()
{
    int i=0, n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    do {
        printf(" %d\n",i);
        i++;
    }while(i<=n);

    return 0;
}