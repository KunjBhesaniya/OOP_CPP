#include<iostream>
using namespace std;
class Subject
{
    public:
    int chapter = 5;
    int cec = 6; 
};
class AOOP : public Subject
{
    public:
    void subjectName()
    {
        cout<<"Advance Object Orianted Programming";
    }    
};
int main()
{
    AOOP a1;
    cout<<"AOOP has "<<a1.chapter<<" Unit"<<endl;;
    cout<<"AOOP has "<<a1.cec<<" CEC"<<endl;
    cout<<"Subject Name : ";
    a1.subjectName();

    return 0;

}