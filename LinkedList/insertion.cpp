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

int length(Node *head)
{
    int count = 0;
    ;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

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

// passing head by reference
void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        return;
    }
    Node *n = new Node(data);
    n->next = head;
    head = n;
}

void insertInMiddle(Node *head, int data, int pos)
{
    // corner case
    if (head == NULL || pos == 0)
    {
        insertAtHead(head, data);
        // return;
    }
    else if (pos > length(head))
    {
        insertAtTail(head, data);
    }
    else
    {
        // take p-1 jumps
        int jump = 1;
        Node *temp = head;
        while (jump <= pos - 1)
        {
            temp = temp->next;
            jump++;
        }
        // create a new node
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
    return;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
}

int main()
{

    Node *head = NULL;
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    print(head);
    insertAtHead(head,10);
    insertAtTail(head,20);
    insertInMiddle(head,30,3);
    print(head);
    return 0;
}