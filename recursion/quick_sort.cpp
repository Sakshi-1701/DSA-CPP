#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
  int i=s-1;
  int j=s;
  int pivot=arr[e];

  for( ;j<=e-1;){
    if(arr[j]<=pivot){
     //merge the smaller element in region 1
     i=i+1;
     swap(arr[i],arr[j]); 
    }
    //expand the larger region 2
    j=j+1;
  }
//place the pivot element in correct place
swap(arr[i+1],arr[e]);  
return i+1;
   
}

void quickSort(int*arr, int s, int e){
//base case
  if(s>=e)
  return;

//recursive case
  int p = partition(arr,s,e);
  //left part
  quickSort(arr,s,p-1);
  //right part
  quickSort(arr,p+1,e);
}

int main(){
//  Quicksort
  int arr[]={2,7,8,6,1,5,4};
  int n=sizeof(arr)/sizeof(int);

  quickSort(arr,0,n-1);  //address,starting index,end
//printing array
for(int i=0;i<=n-1;i++){
  cout<<arr[i]<<" ";
}
  return 0;
}