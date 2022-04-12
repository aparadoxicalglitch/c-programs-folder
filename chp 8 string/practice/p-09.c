#include<stdio.h>

 int main()
{
    char name[20], letter , *ptr ;
    printf("Enter a word \n");
    scanf("%s", name);
    printf("Enter a character you want to check\n");
    scanf("%s",letter);
    //*ptr=name[20];
     while(name!='\0')
    {
    if(name == letter)
    {
    printf("Your enterd character is present");
    }
    else{
    printf("Your enterd character is not present");}
    name[20]++;
    }

    return 0;
}