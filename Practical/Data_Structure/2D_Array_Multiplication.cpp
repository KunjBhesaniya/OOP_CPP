#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mul[10][10], i, j, k, r, c;

    cout<<"Enter Number of Rows : ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c;

    cout<<"Enter 1st Matrix Element : ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }


    cout<<"Enter 2nd Matrix Element : ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl;
    //Printing Array
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

    //Multiplication of Matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j] = 0;
            for(k=0;k<c;k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout<<endl;
    cout<<"Multiplication"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<mul[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}