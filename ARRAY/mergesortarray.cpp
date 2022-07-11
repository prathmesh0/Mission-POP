#include<bits/stdc++.h>
using namespace std;

//approach 1 - brute-force
/*void merge(int arr1[], int arr2[], int n, int m){
    int arr3[n+m];
    int k = 0;
    for(int i = 0; i<n; i++){
        arr3[k++] = arr1[i];
    }
     for(int j = 0; j<m; j++){
        arr3[k++] = arr2[j];
    }

    sort(arr3, arr3+m+n);

    k = 0;
    for(int i = 0; i<n; i++){
        arr1[i] = arr3[k++];
    }
    for(int j = 0; j<m; j++){
        arr2[j] = arr3[k++];
    }
}*/

//approach 2   - without using extra space

/*void merge(int arr1[], int arr2[], int n, int m){
    for(int i = 0; i<n; i++){
        if(arr1[i] > arr2[0]){
            swap(arr1[i],arr2[0]);
        }
    //insertion sort
    int first = arr2[0], j;
    for(j = 1; j < m && arr2[j]< first; j++){
        arr2[j - 1] = arr2[j];
    }
    arr2[j - 1] = first;
  }
    
}*/

    //leetcode ans
 /*void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k  = m+n-1;
        
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                  nums1[k--] = nums2[j--];
            }      
        }
        
        while(i>=0){
             nums1[k--] = nums1[i--];
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }*/

    //gap method
    void merge(int ar1[], int ar2[], int n, int m) {

  int gap = ceil((float)(n + m) / 2);
  while (gap > 0) {
    int i = 0;
    int j = gap;
    while (j < (n + m)) {
      if (j < n && ar1[i] > ar1[j]) {
        swap(ar1[i], ar1[j]);
      } else if (j >= n && i < n && ar1[i] > ar2[j - n]) {
        swap(ar1[i], ar2[j - n]);
      } else if (j >= n && i >= n && ar2[i - n] > ar2[j - n]) {
        swap(ar2[i - n], ar2[j - n]);
      }
      j++;
      i++;
    }
    if (gap == 1) {
      gap = 0;
    } else {
      gap = ceil((float) gap / 2);
    }
  }
}




int main(){
    int arr1[] = {1,4,7,8,10};
    int arr2[] = {2,3,9};
    cout<<"before merged :"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"after merged :"<<endl;
    merge(arr1,arr2,5,3);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}


