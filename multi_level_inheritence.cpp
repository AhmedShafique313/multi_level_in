#include<iostream>
using namespace std;

// GrandFather class
class Grand
{
    public:
        void funcA()
        {
            cout<<"Grandfather inherited"<<endl;
        }
};  

// mothers class
class Father : public Grand
{
    public:
        void funcB()
        {
            cout<<"Father inherited"<<endl;
        }
};  
// sons class
class son : public Father
{
    public:
};  

// main

int main()
{
    son c;
    c.funcA();
    c.funcB();
    cout<<"Son"<<endl;
    return 0;
}