#include<iostream>
using namespace std;

bool search (int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i]==key)
        return true;
    }
    return false;
}


int main(){
    int n, key;
    int arr[100];
    cin>>n;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cout<<"enter the key element :"<<endl;
    cin>>key;
    bool ans = search(arr,n,key);
    if(ans)
    cout<<"element is present "<<endl;
    else
    cout<<"element is not present "<<endl;
    return 0;
}