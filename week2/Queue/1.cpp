#include<iostream>
using namespace std;
const int size = 10;
 class queue{
    public:
    int* array;
    int front;
    int back;
    queue()
    {
        array = new int[size];
        front = -1;
        back = -1;

    }
    void push(int x)
    {
        if(back > size-1)
        {
            cout<<"queue is full"<<endl;
            return;
        }
        back++;
        array[back] = x;
        if(front == -1)
        {
            front++;
        }

    }
    void pop()
    {
        if(front == -1 || front > back)
        {
            cout<<"queue is full "<<endl;
            return;
        }
        front++;
    }
    int peek()
    {
         if(front == -1 || front > back)
        {
            cout<<"queue is full "<<endl;
            return -1;
        }
        return array[front];
    }
    bool isempty()
    {
         if(front == -1 || front > back)
        {
            cout<<"queue is full "<<endl;
            return true;
        }
        return false;
    }
};
main()
{
  queue q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  cout<<q.peek()<<endl;
  q.pop();
  cout<<q.peek()<<endl;
  q.pop();
  cout<<q.peek()<<endl;
  q.pop();
  cout<<q.peek()<<endl;  
  q.pop();
  cout<<q.isempty();
   
}