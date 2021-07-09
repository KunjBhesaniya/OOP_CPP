#include<iostream>
using namespace std;
class Subject_mark
{
    public:
    int rn, s1, s2;
    void getData()
    {
        cout<<"Enter Roll No : ";
        cin>>rn;
        cout<<"Enter Subject 1 Marks : ";
        cin>>s1;
        cout<<"Enter Subject 2 Marks : ";
        cin>>s2;
    }
};
class cocurricular_marks
{
    public:
    int cc;

    void ccMarks()
    {
        cout<<"Enter Cocurricular Activity Marks : ";
        cin>>cc;
    }
};
class Result : public Subject_mark, public cocurricular_marks
{
    private:
    int tot_mark, avg;

    public:
    void displayResult()
    {
        tot_mark = (s1+s2+cc);
        avg = tot_mark/3;
        cout<<"Roll No : "<<rn<<endl;
        cout<<"Total Marks : "<<tot_mark<<endl;
        cout<<"Average : "<<avg<<endl;
        
    }
    
};
int main()
{
    Result r;
    r.getData();
    r.ccMarks();
    r.displayResult();

    return 0;
}
