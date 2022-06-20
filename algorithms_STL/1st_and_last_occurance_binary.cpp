#include <iostream>
using namespace std;

int first_occurance(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int ans=-1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else 
        {
            ans = mid;
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter key";
    cin >> key;
    cout << first_occurance(arr, n, key);

    return 0;
}
