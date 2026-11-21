#include<iostream>
using namespace std;

class student
{
public:
    int roll_no;

    void display()
    {
        cout<<"roll no : "<<roll_no<<endl;
    }
};

int main()
{
    student s[3];

    s[0].roll_no = 101;
    s[1].roll_no = 102;
    s[2].roll_no = 103;

    s[0].display();
    s[1].display();
    s[2].display();

    return 0;
}



