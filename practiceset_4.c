// write a program to sum first ten natural numbers using while loop
#include<stdio.h>

int main() {
    int i = 0, sum=0, n = 10;

    while (i<=n)
    {
      sum += i;
        ++i ;
    }
    printf("The value of sum of 1 to 10 is %d", sum);
    return 0;
}
