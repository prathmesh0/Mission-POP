#include<iostream>
#include<queue>
using namespace std;
//using stl
int main(){
    deque<int>q;

    q.push_front(12);
    q.push_back(14);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop_front();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop_back();

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}