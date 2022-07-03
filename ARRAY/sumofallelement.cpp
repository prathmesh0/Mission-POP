#include<iostream>
using namespace std;

int sumofArray (int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cout<<"sum = "<<sumofArray(arr,n);
    return 0;
}