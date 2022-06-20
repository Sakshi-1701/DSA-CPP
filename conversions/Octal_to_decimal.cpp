#include<bits/stdc++.h>
using namespace std;
int octalToDecimal(int n);
int octalToDecimal(int n)
{
    int t;int x=1; int y=0; int ans;
 while(n>0)
    {t=n%10;
    ans=x*t;
    x*=8;
    n=n/10;}
    return ans;
    
    
}
int main()
{
    int n;
    cin>>n;
    cout<<octalToDecimal(n)<<endl;
}