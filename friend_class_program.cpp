#include<iostream>
using namespace std;

class a
{
private:

    int x = 100;

    friend class b;
};

class b
{
public:

    void display(a obj)
    {
        cout<<"value of x:"<<obj.x;
    }
};

int main()
{
    a a1;
    b b1;

    b1.display(a1);

    return 0;
}
