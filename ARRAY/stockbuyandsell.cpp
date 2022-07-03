#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//brute-force approach --> TC  = O(n2)
/*int maxProfit(int arr[]){
    int maxpro = 0;
    for(int i = 0 ; i < 6 ; i++){
        for(int j = i+1; j < 6; j++){
                if(arr[j] > arr[i]){
                    maxpro = max(maxpro, arr[j]- arr[i]);
                }
        }
    }
    return maxpro;
}

int main() {
  int arr[] = {7,1,5,3,6,4};
  int maxPro = maxProfit(arr);
  cout << "Max profit is: " << maxPro << endl;
}
*/
int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxPro = 0;
        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i]- minPrice);
        }
        return maxPro;
    }
    int main() {
        vector<int> arr = {7,1,5,3,6,4};
  
  int maxPro = maxProfit(arr);
  cout << "Max profit is: " << maxPro << endl;
}