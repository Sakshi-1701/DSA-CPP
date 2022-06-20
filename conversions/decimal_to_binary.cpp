#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n);
int decimalToBinary(int n)
{ int ans=0;
  while(n>0)
  {  int lastdigit;
     n/2; lastdigit=n%2;
  ans=ans*10+ lastdigit;
  
  }
  return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimalToBinary(n)<<endl;
}