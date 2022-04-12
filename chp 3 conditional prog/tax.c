#include<stdio.h>

 int main()
{
    
    float itax=0, inc;
    printf("Enter your income\n");
    scanf("%f",&inc);

    if(inc>=250000 && inc<=500000){
    itax= itax+ 0.05 *(inc-250000);
    }
    else if(inc>=500000 && inc<=1000000){
    itax= itax+ 0.2 *(inc-500000);
    }
    else if(inc>=1000000){
    itax= itax+ 0.05 *(inc-1000000);
    }
        printf("Your total incometax is%f\n", itax);
       
    return 0;
}