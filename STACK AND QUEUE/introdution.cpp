#include<iostream>
//#include<stack>
using namespace std;

class Stack{
    public:
    //data _member
    int *arr;
    int size;
    int top;
    
    //consturctor
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
public:
    //push operation
    void push(int element){
        if((size- top) > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack is OverFlow"<<endl;
        }
    }

    //pop operation
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack is UnderFlow"<<endl;
        }
    }

    //top operation
    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            return -1;
        }
    }

    //empty operation
    bool Empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }


};

int main(){
    //creation of stack using STL
    /*stack<int>s;
    s.push(12);
    s.push(42);
    s.push(124);
    cout<<"top element : "<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<"top element : "<<s.top()<<endl;
    if(s.empty()){
        cout<<" stack is empty"<<endl;
    }
    else{
         cout<<" stack is not empty"<<endl;
    }
    cout<<"size of stack "<<s.size()<<endl;
    */
   Stack st(5);
   st.push(72);
   st.push(28);
   st.push(92);
   int p = st.peek();
   cout<<"top element is "<<p<<endl;
   st.pop();
   st.pop();
   cout<<"top element is "<<st.peek()<<endl;
   if(st.Empty()){
    cout<<"Stack is empty"<<endl;
   }
   else{
    cout<<"Stack not is empty"<<endl;
   }
    return 0;
}