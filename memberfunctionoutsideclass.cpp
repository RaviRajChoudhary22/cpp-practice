#include<iostream>
using namespace std;

class student
{
public:
    void display();
};

void student::display()
{
    cout<<"hello student"<<endl;
}

int main()
{
    student s;
    s.display();

    return 0;
}
