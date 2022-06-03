#include <iostream>
using namespace std;
class stack
{
public:
    int *a;
    int top;
    int size;
    stack(int data)
    {
        a = new int[data];
        top = -1;
        size = data;
    }
    void push(int b)
    {
        if (top >= size )
        {
            cout << "stack is full" << endl;
        }
        else
        {
            top++;
            a[top] = b;
        }
    }
    int peek()
    {
        return a[top];
    }
    void pop()
    {
        if (isempty())

            cout << "stack is empty" << endl;

        else
            top--;
    }
    bool isempty()
    {
        if (top == -1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    stack a(5);
    a.push(2);
    a.push(8);
    a.push(11);
   // cout << a.peek() << endl;

    a.push(10);
    a.push(20);
    a.push(100);
    a.push(1000);
    a.push(1);
    a.push(2);
    cout << a.peek() << endl;
    return 0;
}
