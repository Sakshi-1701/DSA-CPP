#include <iostream>
#include <vector>
using namespace std;

class stack
{
private:
    vector<int> v;

public:
    void push(int x)
    {
        v.push_back(x);
    }
    bool empty()
    {
        return v.size() == 0;
    }
    void pop()
    {
        if (!empty())
        {
            v.pop_back();
        }
    }
    int Top()
    {
        return v[v.size() - 1];
    }
};

int main()
{
    stack s;
    for (int i = 1; i <= 5; i++)
    {
        s.push(i * i);
    }
    // try to print content of the stack by popping stack elements
    while (!s.empty())
    {
        cout << s.Top() << endl;
        s.pop();
    }
    return 0;
}