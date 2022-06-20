#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cout << "enter the number for row ";
    cin >> n;
    cout << "enter number for column ";
    cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
for (int k = 0; k < n; k++)
    {
        for (int l=m-1;l>=0;l--)
        {  
           sum+=arr[k][l];
        }
        
    }
   
    cout << "sum of left diagonal element in an array " << sum;

    return 0;
}