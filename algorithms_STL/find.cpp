#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int arr[]={1,10,11,9,100};
 int n= sizeof(arr)/sizeof(arr+n);

 //search-> find
 int key;
 cin>>key;
 auto it=find(arr,arr+n,key); 
// cout<<it<<endl; in this we get address in hexadecimal form. but we want index.
int index=it-arr; //so we subtract base address from the address of key. sub of 2 ptrs give no of boxes bw them  
cout<<index;
}