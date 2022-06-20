#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    return 1;
    int small_ans=fact(n-1);
    int ans=n*small_ans;
    return ans;

}

int main()
{
  int n;
  cin>>n;

  cout<<fact(n)<<endl;
    return 0;
}