#include<iostream>
using namespace std;
int main()
{
    int rows,col;
    cout<<"number of rows n columns"<<endl;
    cin>>rows>>col;
     for(int i=1;i<=rows;i++)
     {
         for(int k=1;k<=col;k++)
         {
             if(i==1||i==rows||k==1||k==col)
             {cout<<"*";}
             else
             {cout<<" ";}
         }
         cout<<endl;
     }
    
}