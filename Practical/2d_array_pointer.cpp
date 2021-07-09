#include<iostream>
using namespace std;  
int main()
{
  int arr[3][4] = { {10, 11}, {20, 21}, {30, 31,} };
  int i, j;
  for (i = 0; i < 3; i++)
  {
    cout<<"Address of "<<i<<"th array = "<<i<<arr[i]<<*(arr + i)<<endl;
      
    for (j = 0; j < 4; j++)
    {
      cout<<arr[i][j]<< *(*(arr + i) + j);
    }
    cout<<endl;
  }
  
  return 0;
}