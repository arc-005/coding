// write a program to print n natural numbers in reverse order
#include<stdio.h>

int main() {
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);


    for(int i=n; i; i--){
        printf("Th value of i is %d \n",i);
    }
    
    
    return 0;
}