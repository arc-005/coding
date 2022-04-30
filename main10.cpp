#include<iostream>
using namespace std; 

int main(){
    for (int i = 0; i < 4; i++)
    {
        if (i==2)
        {
            break;
        }
        cout<<i<<endl;
        
    }
    for (int j = 0; j < 10; j++)
    {
       if (j==2)
       {
           continue;
       }
       cout<<j<<endl;
       
    }
    

    return 0;
}