#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"Virtual Base Class";
    }
};
class B : public virtual A
{};
class C : public virtual A
{};
class D : public B, public C
{};
int main()
{
    D object;
    object.display();

    return 0;
}