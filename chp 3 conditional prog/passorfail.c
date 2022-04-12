#include<stdio.h>

 int main()
{
    int phy , chem , math;
    float total=0;
    printf("Enter physics marks\n");
    scanf("%d",&phy);

    printf("Enter chemistry marks\n");
    scanf("%d",&chem);

    printf("Enter physics marks\n");
    scanf("%d",&math);

    total= (phy+chem+math)/3;
    if((total < 40) || phy<33 || chem<33 ||math<33)
    {//if you want your value in int then (int) total
      printf("Your totakl percentage is %f and you have failed\n", total);
    }
    else{
        printf("Your totakl percentage is %f and you have passed\n", total);
    }
       
    return 0;
}