#include<iostream>
using namespace std;
class BaseClass
{
    public:
    int n1;

    void display()
    {
        cout<<"Display n1 : "<<n1<<endl;
    }
};
class DerivedClass : public BaseClass
{
    public:
    int n2;

    void display()
    {
        cout<<"Display n2 : "<<n2<<endl;
    }
};
int main()
{
    BaseClass b;
    BaseClass *bptr;
    cout<<"Pointer of base class point to it"<<endl;
    bptr = &b;
    bptr->n1 = 22;
    bptr->display();

    DerivedClass d;
    DerivedClass *dptr;
    dptr = &d;
    dptr->n2 = 33;
    dptr->display();

    return 0;
}