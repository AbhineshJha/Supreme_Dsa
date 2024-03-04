#include<iostream>
using namespace std;
int ReverseInt(int n);
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
int res=ReverseInt(num);
cout<<"The reverse intger of "<<num<<" is : "<<res;
return 0;
}
int ReverseInt(int n){
    int res=0;
    while (n!=0)
    {
        res=n%10+res*10;
        n/=10;
    }
    return res;
}