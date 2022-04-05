// write a program to determine whether a character entered by the user is upppercase or lowercase. 
#include<stdio.h>

int main() {
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if(ch<=122 && ch>=97)
    printf("It is lowercase");

    else
    printf("It is uppercase");
    return 0;
}