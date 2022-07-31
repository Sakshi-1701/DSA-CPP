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

void deleteNode(Node *&head)
{
    if (head == NULL)
    {
        cout << "EMPTY LL";
        return;
    }
    Node *temp = head->next;
    delete head;
    head = temp;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
}
bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (head->data == key)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

// recursive searching
bool recSearching(Node *head, int key)
{
    if (head == NULL)
    {
        return false;
    }
    if (head->data == key)
        return true;
    else
    {
        return recSearching(head->next, key);
    }
}

// TAKING INPUT
Node *take_input()
{
    int d;
    cout<<"enter num of elements"<<endl;
    cin >> d;
    Node *head = NULL;
    cout<<"enter elements"<<endl;
    while (d != -1)
    {
        insertAtHead(head, d);
        cin >> d;
    }
    return head;
}

// OPERATOR OVERLOADING, OVERLOADING <<,>>
ostream &operator<<(ostream &os, Node *head)
{ // 2parameters are passed, << ke left n right vale, here cin and head
    print(head);
    return os; // os is basically cout. Idhar we are doing cascading of operators
}

Node *merge(Node *a, Node *b)
{
    // base case
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    //take a head ptr
    Node *c;
    if(a->data<b->data){
        c=a;
        c->next=merge(a->next,b);
    }
    else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
    }

int main()
{
    /*
        Node *head = NULL;
        insertAtHead(head, 3);
        insertAtHead(head, 2);
        insertAtHead(head, 1);
        insertAtHead(head, 0);
        print(head);
        cout << endl;
        insertAtHead(head, 10);
        insertAtTail(head, 20);
        insertInMiddle(head, 30, 3);
        print(head);

        if (search(head, 10))
        {
            cout << "found";
        }
        else
        {
            cout << "not found";
        }*/
    Node *head1 = take_input();
    Node *head2 = take_input(); // 2 LLs
    cout << head1 << head2<<endl<<endl;     // since operator ko overload kra hai,
                            // isliye puri LL print horhi,else sirf head ka address print hota

    // agar bina cascading k krte, to cout<<head1<<head2 error deta
    Node *neewHead=merge(head1,head2);
    cout<<neewHead;
    return 0;
}