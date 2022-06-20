#include<iostream>
using namespace std;

void bubble_sort(int a[],int n){
    //base case
    if(n==1){
       return; 
    }
    //rec case
    //when you have moved the largest element in the current part to the end of the array ny pairwise swapping
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    //first n-2 elements
    bubble_sort(a,n-1);
}

int main(){
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
bubble_sort(a,n);

    return 0;
}