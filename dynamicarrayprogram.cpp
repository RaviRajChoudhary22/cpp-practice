#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter size : ";
    cin>>n;

    int *arr = new int[n];
    cout<<"enter elements : "<<endl;

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"elements are : "<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    delete []arr;

    return 0;
}
