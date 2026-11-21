#include<iostream>
#include<string>
using namespace std;

struct student
{
    int roll_number;
    string name;
    float marks;
};

int main()
{
    student s1;

    s1.roll_number = 101;
    s1.name = "ravi";
    s1.marks = 99.9;

    cout<<"roll no : "<<s1.roll_number<<endl;
    cout<<"name : "<<s1.name<<endl;
    cout<<"marks : "<<s1.marks<<endl;

    return 0;

}


