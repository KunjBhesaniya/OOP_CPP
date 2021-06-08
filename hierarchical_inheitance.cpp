#include<iostream>
using namespace std;
class Shape
{
    public:
    int x,y;
    void getData(int a, int b)
    {
        x=a;
        y=b;
    }
};
class Rectangle : public Shape
{
    public:
    int area_rect()
    {
        int area = x*y;
        return area;
    }
};
class Triangle : public Shape
{
    public:
    int area_tri()
    {
        float area = 0.5*x*y;
        return area;
    }
};
class Square : public Shape
{
    public:
    int area_squ()
    {
        float area = x*y;
        return area;
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    Square s;

    int length, width;
    cout<<"Enter Length of Rectangle : ";
    cin>>length;
    cout<<"Enter Width of Rectangle : ";
    cin>>width;
    r.getData(length, width);
    int rect_area = r.area_rect();
    cout<<"Area of Rectangle : "<<rect_area<<endl;
    cout<<endl;

    int base, height;
    cout<<"Enter base of Triangle : ";
    cin>>base;
    cout<<"Enter Height of Triangle : ";
    cin>>height;
    t.getData(base, height);
    float area_tri = t.area_tri();
    cout<<"Area of Triangle : "<<area_tri<<endl;
    cout<<endl;

    int side;
    cout<<"Enter Radius of Circle : ";
    cin>>side;
    s.getData(side,side);
    float area_squ = s.area_squ();
    cout<<"Area of Square : "<<area_squ<<endl;
    cout<<endl;

    return 0;
}