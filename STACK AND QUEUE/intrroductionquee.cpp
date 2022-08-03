#include<iostream>
//#include<queue>
using namespace std;

class Queue{
    int *arr;
    int front, rear,size;
    public:
    //constructor
    Queue(){
        size = 10000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){
        if(front == rear){
            cout<<" Queue is empty"<<endl;
        }
        else{
            front++;
        }

        if(front == rear){
           front = 0;
           rear  = 0;
        }
    }

    bool empty(){
        if(front == rear){
            return true;
        }
        else 
        return false;
    }

    int qfront(){
        if(rear == front)
        return -1;
        else
        return arr[front];
    }

};

int main(){
    //queue<int>q;
    Queue q;
    q.push(12);    
    q.push(32);    
    q.push(52);  
    cout<<"front : "<<q.qfront()<<endl;
    q.pop();  
    cout<<"front : "<<q.qfront()<<endl;
    //cout<< "size of queue : "<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is  not empty"<<endl;
    }

    return 0;
}