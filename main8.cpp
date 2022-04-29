#include<iostream>
using namespace std;
int main(){
    // switch-case statements
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
switch (age)
{
case 18:
    cout<<"You are 18"<<endl;
    break;
case 22:
    cout<<"You are 22"<<endl;
    break;
case 2:
    cout<<"You are 2"<<endl;
    break;

default:
    cout<<"no special cases"<<endl;
    break;
}
cout<<"Done with switch-case"<<endl;
    return 0;
}
