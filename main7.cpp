// c++ control structures
// 1-> sequece structures
// 2-> selection structures
// 3-> loop structures

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if ((age<18) && (age>0))
    {
        cout<<"You are not invited to the party."<<endl;
    }
    else if(age == 18){
        cout<<"You are a kid and you will get a kid pass to the party."<<endl;
    }
   else if(age<1){
       cout<<"you will create disaster"<<endl;
   }
    else{
        cout<<"You can come to the party"<<endl;
    }

    return 0;
}