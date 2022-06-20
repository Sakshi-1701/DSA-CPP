#include<iostream>
#include<cstring>
using namespace std;
//1st step
//extract a token eg 56 62 33 , key=2 so token is 62
string extract_String_at_Key(string str, int key)
{
 char *s=strtok((char*)str.c_str(), " ");
while(key>1)
{
   s=strtok(NULL, " ");
   key--; 
  
}
 return (string)s; 
}

int main()
{ int n;
 cin>>n;
 cin.get();
  
string a[100];  
for(int i=0;i<n;i++)
{
    getline(cin,a[i]);
}
int key; //number of column which we want to compare
string reversal, ordering ;

}
