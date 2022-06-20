#include<iostream>
using namespace std;
int main()
{
    int a,b,i,number;
    cout<<"enter the numbers between which you require prime numbers"<<endl;
    cin>>a>>b;
    for(number=a;number<b;number++)
    {
        for(i=2;i<number;i++)
        {
            if(number%2==0)
            break;
        }
        if (i==number)
       { cout<<number<<endl;}
    }
return 0;
}