#include<stdio.h>

int main() {
    int i, sum=0, num=8;
    for ( i = 1; i <=10; i++)
    {
        num= 8*i;
        sum+=num;
    }
    printf("The answer is %d", sum);
    
    return 0;
}