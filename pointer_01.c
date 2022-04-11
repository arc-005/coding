// write a program to print the address of a given variable. Use this address to get the value of this variable.
#include<stdio.h>

int main() {
    int a=6 ;
    int *ptr;
    ptr = &a;
    printf("The address of the variable a is %u\n", ptr);
    printf("The value of the variable a is %u\n", *ptr);

    return 0;
}