#include <iostream>
using namespace std;
class queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    bool isfull()
    {
        if (front == (rear + 1) % size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int element)
    {
        if (isfull())
        {
            cout << "queue is full" << endl;
        }
        else if (isempty())
        {
            front = 0;
            rear = 0;
            arr[rear] = element;
        }
        else
        {
            rear = (rear + 1) % size;

            arr[rear] = element;
        }
    }
    int dequeue()
    {
        if (isempty())
        {
            cout << "queue is empty" << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
    void display()
    {
        if (isempty())
        {
            cout << "queue is empty" << endl;
        }
        else
        {

            int i = front;
            cout << arr[i] << " ";
            while (i != rear)
            {
                i = (i + 1) % size;
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    q.enqueue(4);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
}