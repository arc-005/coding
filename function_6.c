// write a recursive function to calculate sum of first n natural numbers

#include<stdio.h>
int addnumber(int n);
int main() {
    int num;
    printf("Enter a positive integer : \n");
    scanf("%d", &num);
    printf("Sum = %d", addnumber(num));
    return 0;
}

int addnumber(int n){
    if (n != 0){
        return n + addnumber(n-1);
    }
    else 
    return n;
}
