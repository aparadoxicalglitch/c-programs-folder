#include<stdio.h>

 int main()
{
    int n , i,j=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        j++;
    }
    if(j==1)
    printf("%d is neither a composite number nor a prime number",n);
    else if (j==2)
    printf("%d is a prime number",n);
    else
    printf("%d is a composite number",n);

    return 0;
}