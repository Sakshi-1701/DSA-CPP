#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *createLinkedList(int size, int values[])
{
    Node *head = new Node(values[0]);
    Node *current = head;

    for (int i = 1; i < size; i++)
    {
        Node *newNode = new Node(values[i]);
        current->next = newNode;
        current = newNode;
    }
    return head;
}

void display(Node *head)
{
    Node *current = head;
    while (current->next != NULL)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << current->data << endl;
}

Node *insert_after(Node *head, int value)
{
    Node *current = head;
    Node *newNode = new Node(value);

    while (current->data % 7 != 0)
    {
        if (current->next == NULL)
        {
            cout << "There exists no node whose data is divisible by 7. Adding new Node at end." << endl;
            Node *tempNode = current->next;
            current->next = newNode;
            newNode->next = tempNode;
            return head;
        }
        current = current->next;
    }
    Node *tempNode = current->next;
    current->next = newNode;
    newNode->next = tempNode;
    return head;
}
Node* delete_node(Node* head)
{
    Node* current = head;
    while (current->next->data % 13 != 0)
    {
        if (current->next->next == NULL)
        {
            cout << "There exists no node whose data is divisible by 13." << endl;
            return head;
        }
        current = current->next;
    }
    Node *tempNode = current->next->next;
    current->next->next = NULL;
    current->next = tempNode;
    return head;
}

int main()
{

    int size, value;
    cout << "Enter the number of nodes ";
    cin >> size;
    int values[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the data for the node ";
        cin >> values[i];
    }
    Node *head = createLinkedList(size, values);
    cout << "Linked List is as follows" << endl;
    display(head);
    cout << "Enter the value to be inserted" << endl;
    cin >> value;
    head = insert_after(head, value);
    cout << "Linked List after inserting new Node after the node whose data is divisible by 7." << endl;
    display(head);
    
    cout << "Linked List after deleting first node whose data is divisible by 13." << endl;
    head = delete_node(head);
    display(head);

    return 0;
}