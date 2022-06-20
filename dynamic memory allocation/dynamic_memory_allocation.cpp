#include<iostream>
using namespace std;
int main()
{   
    //static: allocation n deallocation done by compiler itself
    int b[100];
    cout<<sizeof(b)<<endl;

    //dynamic allocation (created on the fly)
    int n;
    cin>>n;
    int *a=new int[n];
    cout<<sizeof(a)<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<a[i]<<endl;;
    }
    return 0;

    //Free up the space to avoid memory leak
    delete []a;
}