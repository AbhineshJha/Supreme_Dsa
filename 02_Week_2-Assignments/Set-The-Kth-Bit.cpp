#include<iostream>
using namespace std;
int SetKthBit(int bit,int k);
int main(){
int num,k;
cout<<"Enter any number : ";
cin>>num;
cout<<"Enter the value of k : ";
cin>>k;
int res=SetKthBit(num,k);
cout<<"After setting the kth bit, the value is "<<res;
return 0;
}
int SetKthBit(int bit, int k){
    // int store=1;
    // int s=store<<k;
    // return bit | s;
    return bit | (1<<k);
}