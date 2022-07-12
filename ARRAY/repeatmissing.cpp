#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//using count sort
/*vector<int>RepeatandMissing(vector<int>arr){
    int n = arr.size()+1;
    vector<int>substitute(n,0);
    vector<int>ans;
    for (int  i = 0; i < arr.size(); i++)
    {
        substitute[arr[i]]++;
    }

    for(int i = 1; i<= arr.size(); i++){
        if(substitute[i] == 0 || substitute[i]>1)
        ans.push_back(i);
    }

    return ans;
}*/

//using maths
vector<int>RepeatandMissing(vector<int>A){
long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    vector <int> ans;

    ans.push_back(repeating);
    ans.push_back(missingNumber);

    return ans;
}


int main(){
    vector<int>arr = {3,1,2,5,3};
    vector<int>ans = RepeatandMissing(arr);
    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}