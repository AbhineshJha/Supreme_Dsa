#include<iostream>
using namespace std;
bool CheckEvenOddNormalMethod(int n);
bool CheckEvenOddBitwiseMethod(int n);
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
int res=CheckEvenOddNormalMethod(num);
if (res) cout<<"Even !!";
else cout<<"Odd !!";

int res=CheckEvenOddBitwiseMethod(num);
if (res) cout<<"Even !!";
else cout<<"Odd !!";

return 0;
}
bool CheckEvenOddNormalMethod(int n){
    if (n%2==0) return 1;
    else return 0;
    
}
bool CheckEvenOddBitwiseMethod(int n){
    int res=n%2;
    if (res) return 0;
    else return 1;
    
    
}