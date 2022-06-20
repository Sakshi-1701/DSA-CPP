#include<iostream>
using namespace std;
int main()
{  
    int t1=0,t2=1,nextterm,n;
    cin>>n;
    for(int i=0;i<=n;i++)
    { cout<<t1<<endl;
        nextterm=t1+t2;
    t1=t2;
    t2=nextterm;

    }
}