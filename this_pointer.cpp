#include<iostream>
using namespace std;

class student
{
public:
    int roll;

    void setroll(int roll)
    {
        this -> roll = roll;
    }

    void display()
    {
        cout<<"roll number : "<<endl;
    }
};

int main()
{
    student s1;

    s1.setroll(101);
    s1.display();

    return 0;
}
