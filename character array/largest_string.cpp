#include<iostream>
#include<cstring>
using namespace std;
// ques:read n,followed by n strings and print the largest string
// sol: for efficient method we'll not store all the strings, rather just 2 string viz largest and current
int main()
{int n;
 cin>>n;      //if we write 3, it will read only 2 strings since 1st string it reads will be a null string viz \n, to avoid this 
 char a[100];
 char largest[100];
 int len=0;
 int largest_length=0;
 cin.get();


for(int i=0;i<n;i++)
{
 cin.getline(a,100);
len =strlen(a);
if(len>largest_length)
{
    largest_length=len;
    strcpy(largest,a);
}
}
cout<<"largest array"<<largest<<""<<endl;
cout<<"largest array length"<<largest_length<<" "<<endl;

}