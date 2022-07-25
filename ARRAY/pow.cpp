#include<iostream>
using namespace std;

/*double power(double x, int n){
    double ans = 1.0;
    for(int i = 0; i < n; i++){
        ans = ans * x;
    }
    return ans;
}*/

double power(double x, int n){
   double ans = 1.0;
   long long nn = n;
   if(nn<0)
   nn = nn*-1;

   while(nn){
    //odd powerr
    if(nn%2){
        ans = ans*x;
        nn = nn-1;
    }
    else{
        ans = x*x;
        nn = nn/2;
    }
   } 
  if (n < 0) 
  ans = (double)(1.0) / (double)(ans);
  return ans;
}

int main(){
    double ans = power(2.1,3);
    cout<< ans<<endl;
    return 0;
}