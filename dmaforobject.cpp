#include<iostream>
using namespace std;

class student
{
public:
    int marks;

    void display()
    {
        cout<<"marks = "<<marks<<endl;
    }
};

int main()
{
    student *s = new student;
    s -> marks = 85;
    s -> display();

    delete s;

    return 0;
}
