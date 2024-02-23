#include<iostream>
using namespace std;
// using void data type
// void sumofThree(int a,int b,int c){
//     cout<<"The sum of "<<a<<" "<<b<<" & "<<c<<" is :"<<a+b+c;
// }

// using int data type
int sumofThree(int a,int b,int c){
    return a+b+c;
}
// Using return in void data type func
void messagePrint(){
    cout<<"Message One !";
    return;
    cout<<"Message two !";
}
int main(){
int x,y,z;
cout<<"Enter three numbers : ";
// cin>>x>>y>>z;
int res=sumofThree(x,y,z);
cout<<"The sum of "<<x<<" "<<y<<" & "<<z<<" is :"<<res<<endl;;
messagePrint();
return 0;
}