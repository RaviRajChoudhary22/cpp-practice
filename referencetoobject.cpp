#include<iostream>
using namespace std;

class student
{
public:
    int roll_no;
};

int main()
{
    student s1;
    s1.roll_no = 101;
    student &s2 = s1;

    cout<<s2.roll_no;

    return 0;
}
