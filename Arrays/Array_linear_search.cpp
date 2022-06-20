#include<iostream>
using namespace std;
int main()
{
    int n,key,i;
    int a[5];
     cout<<"enter array"<<endl;
  for( i=0;i<5;i++)
    {
         cin>>a[i];
    }
    cout<<"enter number u wanna search"<<endl;
    cin>>key;
      for(int i=0;i<5;i++)
{
    if(a[i]==key)
    {
        cout<<"number is present in "<<i<<"th index"<<endl;
        break;
    }
    
}
if(i==n)
{
    cout<<"number not present";
}
}