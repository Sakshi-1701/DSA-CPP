#include<iostream>
using namespace std;
int main()
{
   int r,c;
   cin>>r>>c;
//create an array of row heads
  int **arr= new int *[r];
  //create actual 1d arrays that make 2d arrays
  for(int i=0;i<r;i++)
  {
      arr[i]=new int [c]; //arr[i] means the row number and it stores the address of the 1st element of 1d array with c columns
  }
//take input and print element
 for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {   cin>>arr[i][j];
          cout<<arr[i][j]<<endl;
      }
  }
}