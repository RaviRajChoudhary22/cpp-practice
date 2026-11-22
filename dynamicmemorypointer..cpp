#include<iostream>
using namespace std;

int main()
{
    int *p = new int(50);
    cout<<"value : "<<*p<<endl;

    delete p;

    return 0;
}
