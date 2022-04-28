#include<iostream>
using namespace std;
// reference variables 
int main(){
    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // typecasting 
    int a = 45;
    float b = 45.678;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of a is "<<(int)a;
    return 0;
}