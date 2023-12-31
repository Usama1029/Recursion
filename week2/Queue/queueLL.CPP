#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue{
    public:
    node* front;
    node* back;
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void push(int x)
    {
        node* n  = new node(x);
        if(front == NULL)
        {
            front = n;
            back = n;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if(front == NULL)
        {
            cout<<"queue is underflow";
            return;
        }
        node* del = front;
        front = front->next;
        delete del;
    }
    int peek()
    {
       if(front == NULL)
        {
            cout<<"no element is queue";
            return;
        } 
        return front->data;
    }

}
 int main()
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
  //cout<<q.isempty();
   
}