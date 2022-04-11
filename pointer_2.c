// write a program having a variable i. Print the address of i. Pass this variable to a function and print its address.
#include<stdio.h>

void printadd(int a){
    printf("The address of variable a ia %u\n", &a);
}


int main() {
    int i=4;
    printf("The value of varible i is %d\n", i);
    printadd(i);
     printf("The address of varible i is %u\n", &i);
    return 0;
}







