//replace pi with "3.14"
//eg adjhpiadnpiaa ==> adjh3.14adn3.14aa

#include<iostream>
using namespace std;

void replacePi(char a[], int i){
    //base case
    if(a[i]=='\0' or a[i+1]=='\0'){
        return;
    }

    //look for pi for current location
if(a[i]=='p' and a[i+1]=='i'){
    //shifting + replacement with 3.14
    int j=i+2;

    //take j to the end to array so that we can shift all the elements 
    while(a[j]!='\0'){
        j++;
    }
    
    //shifting (right to left)
    while(j>=i+2){
        a[j+2]=a[j];
        j--;
    }

    //replacement +rec call for remaining part
    a[i]='3';
    a[i+1]='.';
    a[i+2]='1';
    a[i+3]='4';
    replacePi(a,i+4); //since now the remaining array starts from i+4
    
    }
else{
    replacePi(a,i+1);
}

return;
}

int main(){
    char a[100];
    cin>>a;
    replacePi(a,0);
    cout<<a<<endl;

    return 0;
}