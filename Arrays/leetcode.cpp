#include<iostream>
using namespace std;
#include<math.h>

class Solution {
public:
    long long int reverse(int x) {
         if(x>=pow(2 , 31) || x<= -pow(2 , 31))
        {cout<<"0";}
        else
        {
        long long int revNum = 0 , f;
        if(x>0)
        {
            while(x>0){
                f = x % 10;
                revNum = (revNum * 10) + f;
                x = x / 10;
            }
            if(revNum>pow(2 , 31))    //reverse ke badd digit bad bhi sakte hai
               cout<<"0";
        
        }
        else if(x == 0) cout<<"0";
        else if(x<0){
            long long int rev = -x;
            while(rev>0){
                f = rev % 10;
                revNum = (revNum * 10) + f;
                rev = (rev / 10);
            }
            if(revNum>pow(2 , 31))    //reverse ke badd digit bad bhi sakte hai
                cout<<"0";
            
            revNum = -revNum;
        }
        cout<<revNum;   
        }     
    }
};
int main()
{   int n;
     cout<<"enter number";
    cin>>n;
    Solution obj;
    obj.reverse(n);
    

}