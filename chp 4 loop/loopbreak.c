#include<stdio.h>

 int main()
{
    int i=0, n;
    do {
    printf("the value of i : %d\n", i);
    //scanf("%d",&n);
    if(i==4){
    break;} i++;
    }while(i<10);

    return 0;
}