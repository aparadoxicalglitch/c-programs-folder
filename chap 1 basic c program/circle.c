#include<stdio.h>

 int main()
{
    int r; 
    float pi=3.14 , area=0 , volume=0;
    printf("Enter the radius of circle r \n");
    scanf("%d", &r);
    area= pi*r*r;
    printf("The area of the circle =%f \n" , area);
    int h;
    printf("Enter the value of h \n");
    scanf("%d", &h);
    volume = pi*r*r*h;
    printf("The volume of cylinder=%f \n", volume );
    return 0;
}