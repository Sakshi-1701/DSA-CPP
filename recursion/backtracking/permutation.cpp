#include<iostream>
using namespace std;

void permutaions(char*in,int i){
     //base case
     if(in[i]=='\0'){
        cout<<in<<" ";
        return;
     }
     //rec case
     for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        permutaions(in,i+1);

        //backtracking to restore the original array
        swap(in[i],in[j]);

     }
    
}

int main(){
    char in[10];
    cin>>in;
    
    permutaions(in,0);

    return 0;
}