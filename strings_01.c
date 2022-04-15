// create a string using "" and print its content using a loop.
#include<stdio.h>

int main() {
    char str[]= "ASHISH";
    char *ptr = str;
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}