#include<iostream>
using namespace std;

int find(int a[], int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {   int mid=(s+e)/2;
        if(a[mid]==key)
       { return mid;}
       //ab 2 cases banaenge i.e mid kis part me hai, first part me ya second part me
       
       else if(a[s]<=a[mid]) // mid point lies on first part
       {
         //isme bhi 2 cases , whether the key is in left side or right side
         if(key>=a[s] && key<=mid)
         {
             e=mid=1;
         }
         else
         s=mid+1;

       }
       else if(a[e]>=a[mid]) //mid point lies in second part
       {
           //isme bhi 2 cases k key left m hia ya right m
           if(key>=a[mid]&&key<a[e])
           {
               s=mid+1;
           }
           else
           e=mid-1;
       }
    }
    return -1;
}

int main()
{  int a[100];
int key,n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"enter key";
cin>>key;

int index=find(a,n,key);
cout<<"present at"<<index;
    return 0;
}