#include<iostream>
using namespace std;
class BaseClass
{
    public:
    int a = 5;

    void display()
    {
        cout<<"Value of a : "<<a<<endl;
    }
};
class DerivedClass : public BaseClass
{
    public:
    int b = 10;

    void display()
    {
        cout<<"Value of b : "<<b<<endl;
    }
};
int main()
{
    BaseClass *base;
    DerivedClass d;
    base = &d;
    base->display();

    return 0;
}