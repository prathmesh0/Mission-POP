#include<iostream>
#include<vector>
using namespace std;

//bruteforce approach ---> TC = O(N3)
/*int maxSubArray(vector<int>arr, vector<int>&subarray){
    int maxsum = 0;
    int n = arr.size();
    if(n == 1)
    return arr[0];

    int i,j;
    for(i = 0 ; i<n; i++){
        for(j = i; j<n; j++ ){
            int sum = 0;
            for(int k = i; k<n; k++){
                sum = sum + arr[k];
                if(sum> maxsum){
                    subarray.clear();
                    maxsum = sum;
                    subarray.push_back(i);
                    subarray.push_back(j);
                }
            }
        }
    }
    return maxsum;
}



int main() {
  vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
  vector < int > subarray;
  int lon = maxSubArray(arr, subarray);
  cout << "The longest subarray with maximum sum is " << lon << endl;
  //cout << "The subarray is " << endl;
//   for (auto it = subarray.begin(); it != subarray.end(); it++)
//         cout << *it << " ";
}
*/

//Approach2 - using 2 loops

int maxSubArray(vector<int>arr, vector<int>&subarray){
    int max_sum = INT_MIN;
    int n = arr.size();
    for(int i = 0 ; i<n; i++){
        int curr_sum = 0;
        for(int j = i; j<n; j++ ){
            curr_sum += arr[j]; 
                if(curr_sum> max_sum){
                    subarray.clear();
                    max_sum = curr_sum;
                    subarray.push_back(i);
                    subarray.push_back(j);
                }
            }
        }
    
    return max_sum;
}

int main() {
  vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
  vector < int > subarray;
  int lon = maxSubArray(arr, subarray);
  cout << "The longest subarray with maximum sum is " << lon << endl;
  cout << "The subarray is " << endl;
  for (int i = subarray[0]; i <= subarray[1]; i++) {
    cout << arr[i] << " ";
  }

} 
