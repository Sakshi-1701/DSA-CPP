#include<iostream>
#include <bits/stdc++.h>

using namespace std;


bool isPossible(int arr[],int n,int m,int mid)
{
   int studentUsed=1;
   int pages=0;

   for(int i=0;i<n;i++)
   {
    //    if(arr[i]>mid)
    //    {
    //        return false;
    //    }
       if(pages+arr[i]>mid)
       {
           studentUsed++;
           pages=arr[i];
           if(studentUsed>m)
           {
               return false;
           }
       }
       else{
           pages+=arr[i];
       }
   }
}

int findPages(int arr[],int n,int m)
{
    int sum_of_all_pages=0;
    //if N<M

if(n<m)
return -1;
//sum_of_all_pages for e

for(int i=0;i<n;i++)
{
    sum_of_all_pages+=arr[i];
}

//count number of pages
int s=0;
int e=sum_of_all_pages;
int ans=INT_MAX;

while(s<e)
{
    int mid=(s+e)/2;

    if(isPossible(arr,n,m,mid))
    {
            ans=min(ans,mid);
            e=mid-1;
    } 
    else s=mid+1; //when not possible to divide at x pages, increase number of pges
}

return ans;
}

int main()
{  int m,n;
   cout<<"enter number of books and students"<<endl;
   cin>>n>>m;
   int arr[100];
   for(int i=0;i<n;i++)
   {
   cin>>arr[i];
   }
 

 cout<<findPages(arr,n,m)<<endl;
    return 0;
}