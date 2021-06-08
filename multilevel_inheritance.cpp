#include<iostream>
using namespace std;
class Inheritance
{
    public:
    int ch = 4;
};
class Intro : public Inheritance
{
    public:
    void intro()
    {
        cout<<"Introduction to Inheritance";
    }
};
class Type : public Intro
{
    public:
    void inheritanceType()
    {
        cout<<"Single Inheritance"<<endl<<"Multiple Inheritance"<<endl<<"Multilevel Inheritance"<<endl<<"Hybrid Inheritance"<<endl<<
        "Hierarchical Inheritance"<<endl;
    }
};
int main()
{
    Type a;
    cout<<"Unit 1 : ";
    a.intro();
    cout<<endl;
    cout<<endl;
    cout<<"Types of Inheritance : "<<a.ch<<endl;
    a.inheritanceType();

    return 0;
}