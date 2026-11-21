#include<iostream>
using namespace std;

class parent
{
protected:
    int number;
};

class child : public parent
{
public:

    void setnumber()
    {
        number = 100;
        cout<<"number";
    }
};

int main()
{
    child c;
    c.setnumber();

    return 0;
}
