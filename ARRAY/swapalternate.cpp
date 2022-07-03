#include<iostream>
using namespace std;

void swapAlaterantive (int arr[], int n){
    for(int i = 0 ; i < n; i += 2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
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

    swapAlaterantive(arr, n);
     for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
   // printarry(arr, n);
    return 0;
}