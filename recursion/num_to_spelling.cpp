#include<iostream>
using namespace std;
char words[][10]={"zero", "one","two","three","four","five","six","seven","eight","nine"};

void printSpell(int num){
//base case
if(num==0){
    return;
}
//rec case
printSpell(num/10);
int digit=num%10;
cout<<words[digit]<<" ";
return;

}

int main(){

int num=2048;
printSpell(num);

return 0;
}