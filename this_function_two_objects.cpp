#include<iostream>
using namespace std;

class student
{
public:
    int roll;
    int marks;

    void setmarks(int marks)
    {
        this->marks = marks;
    }

    void display()
    {
        cout<<"marks :"<<marks<<endl;
    }
};

int main()
{
    student s1;
    student s2;

    s1.setmarks(80);
    s2.setmarks(95);

    s1.display();
    s2.display();

    return 0;
}
