#include<bits/stdc++.h> //this is header file which includes multiple header files
using namespace std;
int binaryToDecimal(int n);
int binaryToDecimal(int n)
{
    int ans=0, x=1;
    while(n>0)
    {  
        int t=n%10;
        ans+=x*t;
        x*=2;
        n=n/10;        
    }
    return ans;

}
int main()
{ int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;

}
