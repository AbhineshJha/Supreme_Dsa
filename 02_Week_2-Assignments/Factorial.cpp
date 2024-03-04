#include<iostream>
using namespace std;
int factorial(int n);
int main(){
int num;
cout<<"Enter any number :";
cin>>num;
int res =factorial(num);
cout<<"The factorial of "<<num<<" is "<<res;
return 0;
}
int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}