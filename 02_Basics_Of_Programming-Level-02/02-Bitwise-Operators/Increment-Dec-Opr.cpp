#include<iostream>
using namespace std;
int main(){

// int a=4;
// cout<<++a<<endl; //5
// cout<<a++<<endl; //5
// cout<<a<<endl;//6

// int b=4;
// cout<<--b<<endl; //3
// cout<<b--<<endl; //3
// cout<<b<<endl; //2


int a=10;
cout<<(++a)*(a++)<<endl;
cout<<((a++)*(++a))<<endl;

return 0;
}