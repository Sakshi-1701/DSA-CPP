//better approach using just 2 nested loops
#include<iostream>
using namespace std;
int main()
{
   int a[10]; int n;
   int cumSum[10];int currentSum, maxSum=0;int left=1,right=1;
   cout<<"enter size of array ";
   cin>> n;
   cout<<"enter elemnts of array ";
   cin>>a[0];
   cumSum[0]=a[0];
   for(int i=1;i<n;i++)
   {
       cin>>a[i];
       cumSum[i]=cumSum[i-1]+a[i];

   }
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           currentSum=0;
           currentSum=cumSum[j]-cumSum[i-1];
           if(currentSum>maxSum)
           {
               maxSum=currentSum;
               left=i;
               right=j;
               
           }
           
       }
   }
 cout<<"max sum of subarray is: "<<maxSum<<endl;
 cout<<"for the subarray ";
 for(int k=left;k<=right;k++)
 {
     cout<<a[k]<<" , "; 
 }   

}