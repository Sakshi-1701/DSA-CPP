#include<iostream>
using namespace std;

//whether number is even or odd
bool isOdd(int n)
{
   return (n&1);    //by using &, if last bit of n is 1,its odd , if its 0,its even
}

//telling the i th bit
int getBit(int n,int i)   
{
int mask=1<<i;
int bit=n&mask;
if(bit>0){
    return 1;
}
else return 0;
}

//main
int main()
{   int n=5;
    int i;
    cin>>i;  //bit number
    cout<<"whether odd or not "<<isOdd(n)<<endl;
    cout<<"the i th bit of 5 is "<<getBit(n,i)<<endl;
    return 0;
}