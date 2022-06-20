#include <iostream>
using namespace std;
int main()
{
    int m, n, val;
    cin >> m >> n;
    int a[m][n];
   
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> a[row][col];
        }
    }

    for (int col = 0; col < n; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < m; row++)
            {
                cout << a[row][col] << " ";
            }
        }
        else
        {
            for (int row = m - 1; row >= 0; row--)
            {
                cout << a[row][col]<<" ";
            }
        }
        cout << endl;
    }
}