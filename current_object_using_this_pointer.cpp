#include<iostream>
using namespace std;

class number
{
public:
    int x;

    number &setvalue(int x)
    {
        this -> x = x;
        return *this;
    }

    void display()
    {
        cout<<"value :"<<x;
    }
};

int main()
{
    number n1;
    n1.setvalue(160);

    n1.display();

    return 0;
}
