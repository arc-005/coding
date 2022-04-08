#include<stdio.h>
void display(); //function prototype
int main() {
    int a;
    display(); //function call
    printf("Display function finished its work \n");
    return 0;
}
// fnction definition
void display(){
    printf("This is display \n");
}