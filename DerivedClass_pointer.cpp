#include<iostream>
using namespace std;
class BaseClass
{
    public:
    int var_base;

    void display()
    {
    cout<<"Display Base Class "<<"variable var_base : "<<var_base<<endl;
    }
};
class DerivedClass : public BaseClass
{
    public:
    int var_derived;

    void display()
    {
        cout<<"Display Base Class "<<"variable var_base : "<<var_base<<endl;
        cout<<"Display Derived Class "<<"variable var_derived : "<<var_derived<<endl;
    }
};
int main()
{
    //Pointer to Base Class
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    //Points to Derived Class
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass* base_class_derived;

    base_class_derived = &obj_derived;

    base_class_derived->var_base = 1200;
    base_class_derived->var_derived = 12;
    base_class_derived->display();

    return 0;
}