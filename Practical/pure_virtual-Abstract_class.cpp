#include<iostream>
using namespace std;
class A
{
    public:
    virtual void s() = 0;
};
class B : public A
{
    public:
    void s()
    {
        cout<<"Virtual Function in Derived Class";
    }
};
int main()
{
    A *a;
    B objb;
    a = &objb;
    a->s();

    return 0;
}