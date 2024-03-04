#include<iostream>
using namespace std;
float AreaOfCircle(int radius);
int main(){
int r;
cout<<"Enter radius : ";
cin>>r;
float res=AreaOfCircle(r);
cout<<res;
return 0;
}
float AreaOfCircle(int radius){
    float pi=22.0/7.0;
    return pi*radius*radius;
}