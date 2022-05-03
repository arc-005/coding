#include<iostream>
using namespace std; 

// function prototype
int sum(int a, int b);

void g();

int main(){
    int num1 ,num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    // ṇum1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b){
    // Formal parameters a and b will be taling values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}
void g(){
    cout<<"\n Hello , how are you ?";
}