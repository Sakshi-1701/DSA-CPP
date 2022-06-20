#include <iostream>
#include <stack>
using namespace std;

void transfer(stack<int> &s1, stack<int> &s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}
void reverse(stack<int> &s1)
{
    stack<int> s2;
    int x;
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        // pick the top most element and store it in x and pop
        x = s1.top();
        s1.pop();

        // transfer n-i-1 from stack 1 to stack 2
        transfer(s1, s2, n - i - 1);

        // transfer top most element to botton of stack1
        s1.push(x);
        // transfer n-i-1 from stack 2 to stack 1
        transfer(s2, s1, n - i - 1);
    }
}

int main()
{
    stack<int> s1;

    for (int i = 0; i < 5; i++)
    {
        s1.push(i);
    }

    reverse(s1);
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}