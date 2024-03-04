#include<iostream>
using namespace std;
int CountAllSetBits(int var);
int CountAllSetBitsBitwise(int var);
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
// int res=CountAllSetBits(num);
int res=CountAllSetBitsBitwise(num);
cout<<"There are total "<<res<<" set bits in "<<num<<" .!";
return 0;
}
int CountAllSetBits(int var){
    int count=0;
    while (var!=0)
    {
        if(var%2==1){
            count++;
        }
        var/=2;
    }
    return count;
}
int CountAllSetBitsBitwise(int var){    
    int count=0;
    while (var!=0)
    {
        // int store=var&1;
        if (var&1) count++;
        var=var>>1;
    }
    return count;
}