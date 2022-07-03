#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void permutaions(char*in,int i, set <string> &s){
     //base case
     if(in[i]=='\0'){
        //cout<<in<<" ";
        string t(in);
        s.insert(t);
        return;
     }
     //rec case
     for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        permutaions(in,i+1,s);

        //backtracking to restore the original array
        swap(in[i],in[j]);

     }
    
}

int main(){
    char in[10];
    cin>>in;
    
    set <string> s;
    permutaions(in,0,s);

    for(auto str:s){
        cout<<str<<" , ";
    }

    return 0;
}