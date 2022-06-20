#include <iostream>
using namespace std;
int main()
{
    int m, n, key;
    cin >> m >> n >> key;
    int a[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    int i = 0;
    int j = n - 1;
    while (i >= 0 && j >= 0 && i < m && j < n)
    {
        if (a[i][j] > key)
        {
            j--;
        }
        else if (a[i][j] < key)
        {
            i++;
        }
        else if (a[i][j] == key)
        {
            cout << "key is present:" << a[i][j];
            break;
        }
    }
    cout<<"not present";
}