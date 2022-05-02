#include<iostream>
using namespace std; 

typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds;//1
} ;


int main(){

    enum meal {breakfast, lunch, dinner};
    meal l1 = lunch;
    cout<<l1<<endl;
    
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    ep ashish;
    struct employee rohan;
    struct employee shubham;
    ashish.eid = 12;
    ashish.favchar = 'h';
    ashish.salary = 13000000;

    cout<<"The value is "<< ashish.eid<<endl;
    cout<<"The value is "<< ashish.favchar<<endl;
    cout<<"The value is "<< ashish.salary<<endl;
    

    union money m1;
    m1.rice = 56;
    m1.car = 'f';

    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;


    return 0;
}