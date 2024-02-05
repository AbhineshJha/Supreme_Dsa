#include<iostream>
#include<cmath>
using namespace std;
int binaryTOdecimal(){
    int num,store=0,i=0;
    cout<<"Enter any binary number : ";
    cin>>num;

    while (num>0)
    {
        int rem=num%10;
        store=rem*pow(2,i++)+store;
        num/=10;
    }
    cout<<store;
    
}
int main(){
    binaryTOdecimal();
    return 0;
}