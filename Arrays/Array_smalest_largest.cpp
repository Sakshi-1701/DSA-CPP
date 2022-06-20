#include <iostream>
#include <climits>
using namespace std;

int main()
{   int n;
    //Input the array
    cout<<"Enter number of elements "<<endl;
    cin>>n;
    int a[n];
    int i, small = INT_MAX, large = INT_MIN;
    cout <<"Enter the elements "<< endl;
    for (i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    // Finding the Minimum Number 
    for (i=0;i<n;i++)
    {
        if (a[i]<small)
        {
          small=a[i];
        }
    }
    cout<<"Minimum number in the array is: "<< small << endl;
    //Finding Maximum number
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large = a[i];
        }
    }
    cout<<"Maximum number in the array is: "<< large;
    return 0;
}