#include <iostream>
#include <cstdio>
using namespace std;

int largest(int a, int b, int c, int d);

int main()
{ int a,b,c,d;
  cin>>a>>b>>c>>d;
 largest(a, b, c, d);
}
int largest(int a, int b, int c, int d)
{
    if(a>b && a>c && a>d )
    {cout<<a<<endl;}
    if(b>a && b>c && b>d)
    {cout<<b<<endl; }
    if(c>a && c>b && c>d)
    {cout<<c<<endl;}
    if(d>a && d>b && d>c)
    {cout<<d<<endl;}
}
