#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    float var = 10.5342;
    float *ptr = &var;

    cout<<"value of var : "<<var<<endl;                            //value of var
    cout<<"value present at address given by ptr : "<<*ptr<<endl;  //value present at address given by ptr
    cout<<"address of var : "<<&var<<endl;                         //address of var
    cout<<"value of ptr : "<<ptr<<endl;                            //value of ptr
    cout<<"address of ptr : "<<&ptr<<endl;                         //address of ptr 

    return 0;
}