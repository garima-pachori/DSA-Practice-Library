//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }

// } Driver Code Ends


/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *t=new QueueNode(x);
        if(t==NULL){
            return;
        }
        else{
            t->next=NULL;
            if(front==NULL){
                front=rear=t;
            }
            else{
                rear->next=t;
                rear=t;
            }
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code
        int x=-1;
        QueueNode *p;
        if(front==NULL){
            return -1;
        }
        else{
            p=front;
            front=front->next;
            x=p->data;
            delete p;
        }
        return x;
}
