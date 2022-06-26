#include<iostream>
using namespace std;

float square_root(int n, int p)
{
    int s=0;
    int e=n;
    float ans=-1;
     //number of decimals till we need ans
    while(s<=e)
    {
       int  mid=(s+e)/2;
       
       if(mid*mid>n)
       {   
           e=mid-1;
       }
       else if(mid*mid<n)
       {  ans=mid;
           s=mid+1;
       }
       else if(mid*mid==n)
       { 
           return mid;
       }
    }

    //floating part
    float increment=0.1;
    for(int time=0;time<p;time++)
    {
        while(ans*ans<=n)
        {
           ans=ans+increment;
        }
  ans=ans-increment;
  increment=increment/10;
    }

    return ans;
    
}

int main()
{
   int n;
   cout<<"enter number"<<endl;
   cin>>n;

   cout<<square_root(n,3)<<endl;
    return 0;
}