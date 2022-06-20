// given an array , find put whether its sorted or not

#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    // rec case
    if (a[0] < a[1] && isSorted(a + 1, n - 1))
         // arr will start from next position i.e. a+1 and length will be n-1
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << isSorted(arr, n);
    return 0;
}