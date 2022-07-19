#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int data){
    this->data=data;
    this->next=NULL;
}
};

void insertAtTail(Node *&head, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        return;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new Node(data);
    return;
}

void print(Node *head){
 while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
}

void reverse(Node *&head){
Node *current=head;
Node *prev=NULL;
Node *after;
 while(current!=NULL){
    //save  the next node first
    after=current->next;
    //make cuurent point to its previous node
    current->next=prev;
    //update prev and current and take them 1 step ahead
    prev=current;
    current=after;
 }
 head=prev;
 
}

Node* recursive_reverse(Node *head){
    //base case:smallest ll i.e with 1 node
    if(head->next==NULL or head==NULL){
        return head;
    }
    //rec cse
    Node *smallHead=recursive_reverse(head->next);
    Node* temp=smallHead;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    head->next=NULL;
    temp->next=head;
    return smallHead;
}

int main()
{
 Node*head=NULL;
 insertAtTail(head,1) ;
 insertAtTail(head,2) ;
 insertAtTail(head,3); 
cout<<" Original LL : ";
print(head);

reverse(head);
 cout<<"After reversing : ";
 print(head);

 return 0;
}