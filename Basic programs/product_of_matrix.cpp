#include <iostream>
using namespace std;

int main()
{
    int m, n, p; // matrix1 = m*n  matrix2 = n*p

    // input matrix 1
    cout << "enter number of rows and columns of matrix 1 " << endl;
    cin >> m >> n;
    int matrix_1[m][n];

    cout << "enter elements of matrix 1 " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix_1[i][j];
        }
    }

    // input matrix 2
    cout << "enter number of columns for matrix 2" << endl;
    // as number of column of matrix_1 is equal to number of rows of matrix_2
    cin >> p;
    int matrix_2[n][p];
    cout << "enter elements of matrix 2 " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> matrix_2[i][j];
        }
    }

    // multiplication of the two matrices
    int product[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += matrix_1[i][k] * matrix_2[k][j];
            }
            product[i][j] = sum;
        }
    }
    cout << endl;

    // printing the product matrix
    cout << "The product matrix of the given 2 matrices is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
}