#include<iostream>
using namespace std;
int main(){
int num1,num2,res;
int operation;
cout<<"Enter two numbers : ";
cin>>num1>>num2;
cout<<"Operation - add->1 , subtract->2 , multiply->3 , divide->4 : ";
cin>>operation;

switch(operation){
    case 1: 
        res=num1+num2;
        break;
    case 2: 
        res=num1-num2;
        break;
    case 3: 
        res=num1*num2;
        break;
    case 4: 
        res=num1/num2;
        break;
    default:
        cout<<"Entered operational number is invalid .!";
        return 0;    
}
cout<<"The result is : "<<res;
return 0;
}