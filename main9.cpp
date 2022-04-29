#include<iostream>
using namespace std;
int main(){
// loops in c++
// 1->for loop
// 2->while loop
// 3->do-while loop

// for loop
    for (int i = 1; i <= 10; i++)
    {
        cout<<i<<endl;
    }
    // while loop
    int a = 1;
    while (a<=10)
    {
      cout<<a<<endl;
      a++;  
    }
    // do-while loop
    int b = 1;
    do
    {
      cout<<b<<endl;
      ++b;
    } while (b<=10);
    

    return 0;
}