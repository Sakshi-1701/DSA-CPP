#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=2;         //since min is 2 for any arithmatic array
    int pd=a[1]-a[0];  //prvious common differece, intialised 
    int curr=2;       //current pd
    for(int j=2;j<n;j++)
    {
        if(pd==a[j]-a[j-1])          //previous difference same hua to ye
        {
            curr++;
        }
        else{
            pd=a[j]-a[j-1];      //nhi hua to update krdenge since previous vala break hogya
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans;
}