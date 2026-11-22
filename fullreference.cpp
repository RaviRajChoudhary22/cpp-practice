#include<iostream>
using namespace std;

int main()
{
    int number = 10;
    int &reference = number;

    cout<<"original value : "<<number<<endl;
    cout<<"reference value : "<<reference<<endl;

    reference = 50;

    cout<<"after changing reference : "<<endl;
    cout<<"original value : "<<number<<endl;
    cout<<"reference value : "<<reference<<endl;

    return 0;
}
