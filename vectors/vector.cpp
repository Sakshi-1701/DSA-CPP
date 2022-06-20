#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
// int main()
// {
//     vector<int> v;  //vector <datatype> v=name of vector
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
// }
//10,16,7,14,5,3,12,9 reduce this to 4,7,2,6,1,0,5,3
bool mycompare(pair<int,int>p1, pair<int,int>p2)
{
return p1.first<p2.first;
}                                       
int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};                         //else we can make a pair and push in vector like
    vector<pair<int, int>> v;                                         // pair<int,int>p;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)            //p.first=arr[i];
    {                                                                  //p.second=i;
        v.push_back(make_pair(arr[i], i));                             //v.push_back(p);
    }
     sort(v.begin(), v.end(), mycompare);   
     for(int i=0;i<v.size();i++)
     {
       arr[v[i].second]=i; //v[i].second=indices this equals i means k purane indices k sath hi ab new 1,2,3...is way me h
     }                      
for(int i=0;i<v.size();i++)
{
    cout<<arr[i]<<" ";
}
}                                          
                                           
