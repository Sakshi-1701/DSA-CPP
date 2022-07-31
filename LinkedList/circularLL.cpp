#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int d){
        data=d;
        next=NULL;
    }
};

void insert(Node* &head, int data){
    Node*n=new Node(data);
    Node*temp=head;

    n->next=head;
    if(temp!=NULL){
        while(temp->next!=head){
            temp=temp->next;     //traverse till the last node

        }
        temp->next=n;

    }
    head=n;
}

void print(Node*head){
    Node*temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
    }
}

int main()
{
    Node*head=NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);

    print(head);

 return 0;
}