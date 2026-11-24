#include<iostream>
using namespace std;

int add(int a = 10, int b = 20)
{
    return a + b;
}

int main()
{
    cout<<add()<<endl;
    cout<<add(5)<<endl;
    cout<<add(5,10)<<endl;

    return 0;
}


