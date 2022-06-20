#include <iostream>
using namespace std;
#define SIZE 10

// declaring the structuretype doublestack
struct DoubleStack
{
    int arr[SIZE];
    int topA;
    int topB; 

} obj;

// pushing elements into stack A(left)
void pushA(int data)
{
    if (obj.topA+1 < obj.topB){
        obj.topA++;
        obj.arr[obj.topA] = data;
    }
    else{
        cout<<" stack overflow "<<endl;
        return;
    }
}

// pushing elements into stack B(right)
void pushB(int data)
{
 if (obj.topA+1 < obj.topB){
     obj.topB--;
     obj.arr[obj.topB]=data;
 }
 else{
     cout<<" stack overflow "<<endl;
 }
}

//popping elements from stack A(left)
void popA()
{
    if(obj.topA>=0){
    obj.topA--;
    }
    else{
        cout<<"stack A(left) is empty"<<endl;
    }
}

//popping elements from stack B(right)
void popB(){
if(obj.topB<=SIZE){
    obj.topB++;
}
else{
    cout<<"stack B(right) is empty "<<endl;
}
}

//main function
int main()
{
    obj.topA = -1;
    obj.topB = SIZE;
    pushA(1);  //pushing elements in stack A
    pushA(2);
    pushA(3);
    pushA(4);
    cout<<obj.topA<<endl;
    pushB(10); //pushing elements in stack B
    pushB(20);
    pushB(30);
    pushB(40);
    cout<<obj.topB<<endl;
    popA();
    popB();
    cout<<"After popping the elements: "<<endl;
    cout<<"value of topA is: "<<obj.topA<<endl;
    cout<<"value of topB is: "<<obj.topB<<endl;

    
    return 0;
}