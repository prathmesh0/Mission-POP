#include<iostream>
using namespace std;


class CircularQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    CircularQueue(int n){
        size = n;
        rear = front = -1;
        arr = new int[size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            return false;
        }
        //first element to push
        else if(front == -1){
            front = rear = 0;
            
        }
        //to maintain cyclic nature
        else if((rear == size-1) && front != 0){
            rear = 0;
            
        }
        else{
            rear++;
           
        }
         arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        //single element
         if(front == rear){
            front  = rear = -1;
        }
        //to maintain cyclic nature
        else if(front == size-1){
            front = 0;
        }
        else{
            front ++;
        }
        return ans;
    }
};

int main(){
    CircularQueue q(5);
    bool ans = q.enqueue(12);
    bool ans1 = q.enqueue(123);
    bool ans2 = q.enqueue(13);
    bool ans3 = q.enqueue(32);
    bool ans4 = q.enqueue(212);
    bool ans5 = q.enqueue(232);
    cout<<ans3<<endl;
    cout<<ans5<<endl;
    int w = q.dequeue();
    cout<<w<<endl;
    return 0;
}