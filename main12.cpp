#include<iostream>
using namespace std; 

int main(){
    int marks[4] = {23,45,67,87};
    int mathmarks[4];
    mathmarks[0]= 24;
    mathmarks[1]= 23;
    mathmarks[2]= 45;
    mathmarks[3]= 68;
    cout<<"These are  marks"<<endl;
    cout<<marks[0]<<endl;  
    cout<<marks[1]<<endl; 
    marks[2] = 99; 
    cout<<marks[2]<<endl;  
    cout<<marks[3]<<endl;

    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;  
    cout<<mathmarks[1]<<endl;  
    cout<<mathmarks[2]<<endl;  
    cout<<mathmarks[3]<<endl;  


    int i=0;
    // while (i<4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    do
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
    
    
    
    return 0;
}
