#include<iostream>
using namespace std;
class Parent
{
    public:
    Parent()
    {
        cout<<"Parent Class Constructor"<<endl;
    }
    ~Parent()
    {
        cout<<"Parent Class Destructor"<<endl;
    }
};
class Child : public Parent
{
    public:
    Child()
    {
        cout<<"Child Class Constructor"<<endl;
    }
    ~Child()
    {
        cout<<"Child Class Destructor"<<endl;
    }
};
int main()
{
    Child c;

    return 0;
}