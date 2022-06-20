#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int add[n];
    for(int i=0;i<n;i++)
    {
     cin>>add[i];
    }
   int current_sum=0;
   
    for(int i=0;i<n;i++)
    { 
      current_sum+=add[i];
      }
cout<<current_sum;
}