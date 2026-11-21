#include<iostream>
using namespace std;

class student
{
public:
    int roll_no;
    string name;
    float marks;

    void display()
    {
        cout<<"roll_no"<<endl;
    }
};

int main()
{
    student s1;

    s1.roll_no;
    s1.roll_no = 101;

    s1.display();

    return 0;
}
