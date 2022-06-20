#include <iostream>
#include<algorithm> //for STL
using namespace std;
// first method
void rotate(int a[][100], int n)
{
    for (int row = 0; row < n; row++)
    {
        int start_col = 0;
        int end_col = n - 1;
        while (start_col < end_col)
        {
            swap(a[row][start_col], a[row][end_col]); // reversal of rows
            start_col++;
            end_col--;
        }
    }
    // taking transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}
void display(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// using STL
//  void rotate_stl(int a[][100],int n)
//  {
//      for(int i=0;i<n;i++)
//      {
//          reverse(a[i],a[i]+n);
//      }
//      //taking transpose
//  for(int i=0;i<n;i++)
//   {
//       for(int j=0;j<n;j++)
//       {
//           if(i<j)
//           {
//               swap(a[i][j], a[j][i]);

//          }
//      }
//  }

int main()
{
    int n;
    cin >> n;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    rotate(a, n);
    display(a, n);
}
