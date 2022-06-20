#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
     {
        for(int j=n-i;j>=1;j--)
        {cout<<" ";}
        for(int k=1;k<=i;k++)
        {cout<<k<<" " ;}
        for(int j=n-i;j>=1;j--)
        {cout<<" ";}
        cout<<endl;

     }
}