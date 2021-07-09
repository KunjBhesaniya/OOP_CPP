#include<iostream>
using namespace std;
class shape
{
    public:
    float a;

    void getDimension()
    {
        cin>>a;
    }
};
class Square : public shape
{
    public:
    float calculateArea()
    {
        return a*a;
    }
};
class Circle : public shape
{
    public:
    float calculateArea()
    {
        return 3.14*a*a;
    }
};
int main()
{
    Square s;
    Circle c;

    cout<<"Enter length of Square : ";
    s.getDimension();
    cout<<"Dimension of Square : "<<s.calculateArea()<<endl;

    cout<<endl;

    cout<<"Enter length of Circle : ";
    c.getDimension();
    cout<<"Dimension of Circle : "<<c.calculateArea()<<endl;

    return 0;
}