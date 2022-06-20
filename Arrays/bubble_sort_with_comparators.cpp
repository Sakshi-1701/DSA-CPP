#include<iostream>
using namespace std;
bool compare(int a,int b)
{
    return a<b;   //decreasing order, if a>b then increasing order
}

   void bubble_sort(int a[],int n,bool (&cmp)(int a, int b)) //except compare function as a parameter
   {  
      for(int itr=1;itr<=n-1;itr++) // for n items, n-1 iterations required
      {//now we do pairwise swapping
      for(int j=0;j<=n-1-itr;j++)
      {
          if(a[j]>a[j+1])   //if(a[j]>a[j+1])
          {
              swap(a[j],a[j+1]);
          }
      }

      } 
   }

int main()
{  int n,j;
    cout<<"size of array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n, compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    
}