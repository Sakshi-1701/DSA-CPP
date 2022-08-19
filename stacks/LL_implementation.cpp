#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node*top=NULL;

//wheather empty or not
bool isEmpty(){
    if(top==NULL)
        return true;
    else
    return false;
}

//add 1 element in stack
void push(int val){
    Node*n=new Node(val);
    n->next=top;
    top=n;
}


//delete the topmost element
void pop(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        Node*n=top;
        top=top->next;
        delete(n);
    }
}

//print top 
void peek(){
    if(isEmpty())
    cout<<"stack empty"<<endl;
    else
    cout<<"Topmost element is : "<<top->data<<endl;
}

//display the stack
void print(){
if(isEmpty())
cout<<"Stack empty"<<endl;
else{
    Node*temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
}

int main()
{
    push(1);
    push(2);
    push(3);
    peek();
    print();


    return 0;
}