#include<iostream>
using namespace std; 
  int product (int a, int b){
//      static int c = 0;   //this executes only once
//      c = c+1;    //next time this function is run, the value of c will be retained
     return a*b;  
}

int moneyreceived(int currentmoney, float factor = 1.04){
    return currentmoney * factor;
}
int main(){
    int a, b;
    cout<<"Enter the vlaue of and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    
    int money = 100000;
    cout<<"If you have "<<money<<" Rs. in your bank account, you will receive "<<moneyreceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs. in your bank account, you will receive "<<moneyreceived(money, 1.1)<<" Rs after 1 year";
    return 0;
}