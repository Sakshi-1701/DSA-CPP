#include <iostream>
#include <bits/stdc++.h>
//problem-given an array of size n, the task is to find repeating
//element in the array of integers, an element that occurs more than once and whose index of
//first occurence is smallest. eg 1,5,3,2,5,3 so here index=1

//base idea: maintain an array idx[] which stores the first occurence(index) of a particular elemnt a[i]
//then initialize idx[] with -1 and minindx with INT_MAX
//keep updating idx[] whilw traversing the array
using namespace std;
int main()
{
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }                             
   
                                //      0 1 2 3 4 5
    int idx[10];                 //a[i]=[1,5,3,2,5,3]
    for (int i = 0; i < 10; i++) //idx= [-1,-1,-1,-1,-1] a[i] me apn i dalenge
    {                           // like idhr idx[1] me 0 dalenge idx[5]me 1 idx[3] me 2
        idx[i] = -1;
    } 
     int minindex=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[i] != -1)
        {
            minindex = min(minindex, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minindex == INT_MAX)
    {
        cout << "-1";
    }
    else
       { cout << minindex + 1 << endl; //minindex+1 coz index batana hai like kis position pe hai
           }
           return 0;
}