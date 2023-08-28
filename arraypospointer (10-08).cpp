#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int n;
    cout<<"The the index to fetch the number : ";
    cin>>n;
    
    int *ptr = &arr[n];

    cout<<"The element in index "<<n<<" of the array is : "<<*ptr;

    return 0;
}