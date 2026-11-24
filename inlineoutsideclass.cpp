#include<iostream>
using namespace std;

class student
{
public:

    int roll = 101;
    int getroll();
};

inline int student::getroll()
{
    return roll;
}

int main()
{
    student s;
    cout<<s.getroll();

    return 0;
}
