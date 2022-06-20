#include<iostream>
#include<algorithm>
using namespace std;

//define comparator function
//to sort in decreasing order
bool compare(int a,int b)
{
    return a<b;   //decreasing order, if a>b then increasing order
}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,compare); //in actual, its a+n-1 but since last one is excluded by default so we need to add 1 to it
for(int i=0;i<n;i++)  //by default in increasing order
    {
        cout<<a[i]<<" , ";
    }
}
