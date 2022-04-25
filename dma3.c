// create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to male it store 15 numbers (from 7 x 1 to 7 x 15).

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) malloc(10 * sizeof(int));
    for(int i = 0; i <10; i++){
        ptr[i] = 7*(i+1);
    printf("The value of 7 x %d = %d \n", i+1 ,ptr[i]);
    }

    ptr = realloc(ptr, 15 * sizeof(int));
    printf("\n After reallocating..... \n \n");
    for(int i = 0; i <15; i++){
        ptr[i] = 7*(i+1);
    printf("The value of 7 x %d = %d \n", i+1 ,ptr[i]);
    }
    return 0;
}
