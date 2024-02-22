#include<iostream>
#include<cmath>
using namespace std;

int D_intTobinary(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int k=n;
    int store=0,i=1;
   while (n>0)
   {
    int rem=n%2;
    store=(rem*i)+store;
    i*=10;
    n=n/2;
   }
   cout<<"The binary of "<<k<<" is : "<<store;
}
int B_intTobinary(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int k=n;
    int store=0,i=1;
   while (n>0)
   {
    int rem=n&1;
    store=(rem*i)+store;
    i*=10;
    n>>=1;
   }
   cout<<"The binary of "<<k<<" is : "<<store;
}
int main(){
    D_intTobinary();
    B_intTobinary();
    return 0;
}