#include<iostream>
using namespace std;

void reverse (int arr[], int n){
    int s = 0, e =n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    } 
}

void printarry(int arr[], int n){
     for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
   
}


int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    reverse(arr, n);
     for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
   // printarry(arr, n);
    return 0;
}