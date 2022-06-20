#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void funcA()
    {                                         //public can be accessed everywhere
        cout<<"funcA";                         //private can be accessed only inside class
    }                                       //protected can be accessed in class as well as derived class
    private:
    int b;
    void funcB()
    {
        cout<<"funcB";
    }
    protected:
    int c;
    void funcC()
    {
        cout<<"funcC";
    }
};
int main()
{
    A object;
    object.funcA();
    return 0;
}
