#include<iostream>
using namespace std;
class Constructor
{
    private:
    int x,y;

    public:
    Constructor(int x1,int y1)
    {
        x = x1;
        y = y1;
    }

    //Copy Constructor
    Constructor(const Constructor &sam)
    {
        x = sam.x;
        y = sam.y;
    }
    
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    Constructor obj1(10, 15);
    Constructor obj2 = obj1;
    cout<<"Normal Constructor : ";
    obj1.display();
    cout<<endl;
    cout<<"Copy Constructor : ";
    obj2.display();

    return 0;
}