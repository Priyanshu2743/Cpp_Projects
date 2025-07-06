// Stack Using Array

#include <iostream>
// #include <stack>
using namespace std;
class Stack
{
public:
    // properties
    int *arr;
    int top;
    int size;

public:
    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // push
    void push(int element)
    {
        cout << top << endl;
        if (top < size - 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflowed" << endl;
        }
    }

    // pop
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "The stack is empty" << endl;
            return -1;
        }
    }

    boolisEmpty()
    {
        if (top < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(10);
    st.push(12);
    st.push(19);
    st.push(25);
    st.push(10);
    st.push(20);
    st.push(19);
}