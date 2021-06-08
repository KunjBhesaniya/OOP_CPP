#include<iostream>
using namespace std;
class Student
{
    public:
    int id;
    string name;
    void getData()
    {
        cout<<"Enter Student ID : ";
        cin>>id;
        cout<<"Enter Student Name : ";
        cin>>name;
    }
};
class Marks : public Student
{
    public:
    int s1, s2, s3;
    void getMarks()
    {
        cout<<"Enter Maths Mark : ";
        cin>>s1;
        cout<<"Enter Phy Mark : ";
        cin>>s2;
        cout<<"Enter Chem Mark : ";
        cin>>s3;
    }
};
class Coccuricular 
{
    public:
    int cc;
    void ccMarks()
    {
        cout<<"Enter Coccuricular Activity Marks : ";
        cin>>cc;
    }
};
class Result : public Marks, public Coccuricular
{
    private:
    int tot_marks, avg;

    public:
    void displayResult()
    {
        tot_marks = (s1 + s2 + s3 + cc);
        avg = tot_marks/4;

        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Total Marks : "<<tot_marks<<endl;
        cout<<"Average : "<<avg<<endl;
    }
};
int main()
{
    Result a;
    a.getData();
    a.getMarks();
    a.ccMarks();
    a.displayResult();

    return 0;
}