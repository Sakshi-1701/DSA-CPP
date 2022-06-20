#include<iostream>
using namespace std;
//two pointer approach; n iterations
//given a sorted array, find pair of elements such that sum =k
//1st approach: iterate over the entire array using i and j if a[i]=a[j]=k
//2nd approach: eg 1,3,5,7,10,11,12,13, k=16
//here let i be at 1 and j be at 13, 13+1=14, we need no larger than 14, so we'll move i forward since if we move j, no is decreased
//not i is at 3 so 3+13=16 ; we got a pair, lets move both i & j now,
//new i is at 5 new j is at 12; 5+12=17; no is greater than k so we move j backward
int main()
{
    int n, key;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
        cin>>key;
        int i=0;
        int j= n-1;  //in short its n-1
while(i<j)
{ int current_sum=a[i]+a[j];
    if(current_sum<key)
    {
        i++;
    }
    else if(current_sum>key)
    {
        j--;
    }
    else if(current_sum==key)
    {
        cout<<a[i]<<" and"<<a[j]<<endl;
        i++;
        j--;
    }
}
    
}