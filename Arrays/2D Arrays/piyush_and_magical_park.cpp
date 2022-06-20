#include<iostream>
using namespace std;
int main()
{
    int n,m,k,s; 
    cin>>n>>m>>k>>s;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[n][m];
        }
    }

 for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (a[n][m] == '.')
            {
               s-=2;
            }
            else if(a[n][m]=='*')
            {
                s+=5;
            }
            else if(a[n][m]=='#')
            {
                break;
            }
           if(j!=n)
           {
               s--;
           }
        }
    }
    cout<<s;
}
