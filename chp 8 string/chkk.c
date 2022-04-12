#include<stdio.h>

int main(){
    char str[] = "HenryGuardiola";
   // char str[] = {'H', 'e', 'n', 'r', 'y', '\0'};
    char *ptr = str;
    int length=0;
    while(*ptr!='\0'){
        printf("%c\n", *ptr);
        ptr++;
       // length++;
    }
   // printf("length%d",length);
    return 0;
}