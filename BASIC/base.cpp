#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   // cout<<"hello world";
    /*int a, b,sum; 
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    sum =  a+b;
    cout<<" sum = "<<sum<<endl;
   
   //size of variable
   int a;
   float b;
   char c;
   bool d;
   double e;
   cout<<"size of int = "<<sizeof(a)<<endl;
   cout<<"size of float = "<<sizeof(b)<<endl;
   cout<<"size of char = "<<sizeof(c)<<endl;
   cout<<"size of bool = "<<sizeof(d)<<endl;
   cout<<"size of double = "<<sizeof(e)<<endl;
 

   //swap 2 no.
   int n1,n2,temp;
   cin>>n1>>n2;
   temp = n1;
   n1 = n2;
   n2 = temp;
   cout<<n1<<" "<<n2;
  

    //    ascii value of all no;
    for(int i = 0; i<=297; i++){
        cout<<char(i)<<" ";
    }
    return 0;
     

    //largest among three no.
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<a;
    else if(b>a && b>c)
    cout<<b;
    else
    cout<<c;
   

   
   float a;
   double b;
   cin>>a>>b;
   cout<<fixed<<setprecision(3)<<a<<endl;
   cout<<fixed<<setprecision(6)<<b<<endl;
   
   
   //leap year
   int year;
   cout<<"enter the year"<<endl;
   cin>>year;
   if(year%400 == 0 || year%100 !=0 && year%4 == 0)
   cout<<"leap year"<<endl;
   else
   cout<<"not a leap year"<<endl;
    

   //given letter is alphabet(capital or small)or special symbol
   char c;
   cin>>c;
   if(c >= 65 && c <= 90)
    cout<<"capital letter"<<endl;
   else if(c >=97 && c <= 122)
   cout<<"small case letter"<<endl;
   else
   cout<<"symbol"<<endl;
 */

   //conditional operator
    int no1,no2;
    cin>>no1>>no2;
    no1>no2 ? cout<<"no1 is greater" : cout<<"no2 is greater ";
    }