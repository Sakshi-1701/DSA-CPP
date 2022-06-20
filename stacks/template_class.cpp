#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class stack
{
private:
    vector<T> v;

public:
    void push(T x)
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
    T Top()
    {
        return v[v.size() - 1];
    }
};

int main()
{
    stack<char> s;
    for (int i = 65; i <= 70; i++)
    {
        s.push(i);
    }
    // try to print content of the stack by popping stack elements
    while (!s.empty())
    {
        cout << s.Top() << endl;
        s.pop();
    }
    return 0;
}