#include<iostream>
#include<string.h>
using namespace std;

int stringToInt(char*a, int n){
//base case
    if(n==0)
    return 0;
//rec case
    int digit=a[n-1]-0; //last digit
    int small_ans=stringToInt(a,n-1);
    return small_ans*10+digit;    
}

int main(){
    char a[] ="1234";
    int len= strlen(a);
    int x= stringToInt(a,len);
    cout<<" String in int format:  "<<x<<endl;
    cout<< x+1;
    return 0;
}