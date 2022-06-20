#include <iostream>
using namespace std;

bool search(int a[], int n, int key)
{ // base case
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    if (s >e )
    {
        return false;
    }

    // rec case
    if (key > a[mid])
    {
        search(a + mid, (n - mid), key);
    }
    if (key < a[mid])
    {
        search(a, mid, key);
    }
    if (key == mid)
    {
        return true;
    }
}
int main()
{
    int n, key;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter key" << endl;
    cin >> key;
    cout << search(a, n, key);
    return 0;
}