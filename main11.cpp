#include<iostream>
using namespace std; 

int main(){
    // what is a pointer ? 
    // it is a datatype which holds the address of another variable

    int a =5;
    int *b = &a;
    // &--->address of operator

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // *--->dereferance operator
    cout<<"The value at address b is "<<*b<<endl;
    // pointer to pointer
    int **c =&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address-value (value_at(c)) is "<<**c<<endl;
    return 0;
}