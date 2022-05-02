#include<iostream>
using namespace std; 

int main(){
    // pointers and arrays
    int marks[4] = {23,45,67,87};
    int *p = marks;
    cout<<"The Value of *p is "<<*p<<endl;
    cout<<"The Value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The Value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The Value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}