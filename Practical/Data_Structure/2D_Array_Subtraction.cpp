#include<iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], sub[10][10], i, j, r, c;
    
    //Take Input
    cout<<"Enter Number of Rows: ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c;

    cout<<endl;
    cout<<"Enter 1st Matrix Elements"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<endl;
    cout<<"Enter 2nd matrix Elements"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }    
    }

    //Printing Matrix
    cout<<endl;
    cout<<"1st Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"2nd Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<b[i][j]<<'\t';
        }
        cout<<endl;
    }

    //Subtraction of Matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    //Printing Subtraction
    cout<<endl;
    cout<<"Subtraction of Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<sub[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}