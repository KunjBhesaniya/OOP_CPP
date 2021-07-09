#include<iostream>
using namespace std;
int main()
{
    int a[10][10], transpose[10][10], i, j, r, c;

    //Take Input
    cout<<"Enter Number of Rows : ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c;

    cout<<endl;
    cout<<"Enter Matrix Elements"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<endl;
    cout<<"Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<endl;
    }

    //Transpose of Matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    //Printing Transpose Matrix
    cout<<endl;
    cout<<"Transpose of Matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<transpose[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}