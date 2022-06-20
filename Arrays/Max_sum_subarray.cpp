#include<iostream>
using namespace std;
int main()

   {
    int n; int MaxSum=0, CurrentSum=0, left=1, right=1 ;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements of array"<<endl;
for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    //finding subarray
    for(int i=0;i<n;i++)  //first number=i
    {
        for(int j=i;j<n;j++) //last number=j
        {    CurrentSum=0;
            for(int k=i;k<=j;k++)  //number of elements from i to j
            {
               CurrentSum+=a[k];
            }
            if(CurrentSum>MaxSum)
            {
                MaxSum=CurrentSum;
                left=i;
                right=j;
            }
        }
    }
  
    cout<<"max sum of the subarrays is "<<MaxSum<<endl;
    for(int k=left;k<=right;k++)
    {
        cout<<a[k]<<" , ";
    }


} 
//    for(int i=0;i<n;i++)  //first number=i       //for printing sum of all the subarrays
//     {         CurrentSum=0;
//         for(int j=i;j<n;j++) //last number=j
//         {    CurrentSum+=a[j];
//         cout<<a[j]<<endl;
//         }
//     }