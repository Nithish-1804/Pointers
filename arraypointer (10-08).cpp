#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr = &arr[0];

    cout<<"The elements in the array are : ";

    for (int i=0;i<5; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }

    return 0;
}