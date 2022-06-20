#include<iostream>
using namespace std;
void increasing(int n){
//base case
if (n==0)
{
    return;
}
//rec case
increasing(n-1);
cout<<n<<" ";
}
void decreasing(int n)
{ //base case
if(n==0)
{
    return;
}
//rec case
cout<<n<<" ";
decreasing(n-1);

}

int main()
{
    int n;
    cin>>n;

   decreasing(n);
   increasing(n);
} 