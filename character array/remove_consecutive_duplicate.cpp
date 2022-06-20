#include<iostream>
#include<cstring>
using namespace std;
void searchDuplicate(char a[])
{ int prev=0;
    for(int current=1;current<strlen(a);current++)
    {
          if(a[current]!=a[prev])
          {
              prev++;
              a[prev]=a[current];
          }
    }
    a[prev+1]='\0';
    return ;
}
int main()
{
    char a[100];
    cout<<"enter string";
    cin.getline(a,100);
   searchDuplicate(a);
   cout<<a<<endl;

}