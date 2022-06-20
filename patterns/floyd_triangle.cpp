#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout<<"enter number of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {cout<<count<<" ";
        count++;}
        cout<<endl;
    }
}   