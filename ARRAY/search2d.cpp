#include<iostream>
using namespace std;
// naive approach --> T.C = O(n2)
/*bool search(int arr[3][4], int n, int m, int target){
    for (int i = 0; i < n; i++)
    {
        for(int j= 0; j < m; j++){
            if(arr[i][j] == target)
            return true;
        }
    }
    return false;
    
}

//using two pointer and property 
bool search(int arr[3][4], int n, int m, int target){
    int i = 0, j = m-1;
    while(i < n && j >= 0){
            if(arr[i][j]== target)
                return true;

            if(arr[i][j] < target)
                i++;

            else
                j--;    

                }
        return false;        
}*/

bool search(int arr[3][4], int n, int m, int target){
    int start = 0, end = (m*n)-1;
    while(start <= end){
        int mid = (start+end) /2;
        if(arr[mid/m][mid%m] == target){
            return true;
        }
        else if(arr[mid/m][mid%m] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return false;
    }


int main(){
    int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    bool ans = search(arr , 3, 4, 17);
    if(ans){
        cout<<"target is found"<<endl;
    }
    else{
         cout<<"target is not found"<<endl;
    }


    return 0;
}