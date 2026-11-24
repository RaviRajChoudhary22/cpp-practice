#include<iostream>
using namespace std;

class student
{
public:
    int roll = 101;
    int getroll()
    {
        return roll;
    }
};

int main()
{
    student s;

    cout<<s.get1roll();

    return 0;
}
