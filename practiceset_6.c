// write a program to calculate  the factorial of a given number using a for loop.

#include<stdio.h>

int main() {
    int num= 6, i = 0, factorial=1;
    

    for( i = 1; i <=num; i++){
        factorial *= i;
    }
    printf("The value of factorial  %d is %d",num, factorial);
    return 0;
}


