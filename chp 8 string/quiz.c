#include<stdio.h>

int main(){
    char str[] = "Henry";
   // char str[] = {'H', 'e', 'n', 'r', 'y', '\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c\n", *ptr);
        ptr++;
    }
    return 0;
}