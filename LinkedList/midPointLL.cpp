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

Node* midPoint(Node *head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    Node *slow=head;
    Node *fast=head->next;

    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<slow->data;
    return head;
}

int main()
{
 Node*head=NULL;
 insertAtTail(head,1) ;
 insertAtTail(head,2) ;
 insertAtTail(head,3); 
 insertAtTail(head,4); 
 insertAtTail(head,5); 
cout<<" Original LL : ";
print(head);
cout<<endl;
Node*mid= midPoint(head);
//cout<<mid->data;

 return 0;
}