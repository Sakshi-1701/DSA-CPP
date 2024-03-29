#include <iostream>
using namespace std;

#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

//Inserting Elements
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflowed" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
//Removing elements   
   void pop(){
       if(top==-1){
           cout<<"no element to pop"<<endl;
        return;
       }
       top--;
   }

//Topmost Element
   int Top()
   {    if(top==-1){
           cout<<"no element in stack"<<endl;
        return -1;
       }
       return arr[top];
   }

 bool empty()
 {
     return top==-1;
 }
};

int main()
{   stack st;
st.push(1);
st.push(2);
st.push(3);
cout<<st.Top()<<endl;
st.pop();
cout<<st.Top()<<endl;
st.pop();
st.pop();
st.pop();
cout<<st.empty();
    return 0;
}