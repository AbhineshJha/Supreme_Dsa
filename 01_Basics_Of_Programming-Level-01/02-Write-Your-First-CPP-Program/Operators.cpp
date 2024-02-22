#include<iostream>
using namespace std;
int main(){
    

    int num1,num2;
    cout<<"Enter any number : ";
    cin>>num1;
    cout<<"Enter any number : ";
    cin>>num2;

    cout<<endl<<"Arithmetic Operators : "<<endl<<endl;

    cout<<"Addition is : "<<num1+num2<<endl;
    cout<<"Subtraction is : "<<num1+num2<<endl;
    cout<<"Multiplication is : "<<num1+num2<<endl;
    cout<<"Division is : "<<num1+num2<<endl;
    cout<<"Modulo is : "<<num1+num2<<endl;

    cout<<endl<<"Relational Operators : "<<endl<<endl;

    bool a=num1>num2;
    bool b=num1<num2;
    bool c=num1>=num2;
    bool d=num1<=num2;
    bool e=num1!=num2;
    bool f=num1==num2;
    cout<<num1<<" is greater than "<<num2<<" : "<<a<<endl;
    cout<<num2<<" is greater than "<<num1<<" : "<<b<<endl;
    cout<<num1<<" is greater than and equal to  "<<num2<<": "<<c<<endl;
    cout<<num2<<" is greater than and equal to "<<num1<<" :"<<d<<endl;
    cout<<num2<<" is not equal to "<<num1<<" :"<<e<<endl;
    cout<<num2<<" is equal to "<<num1<<" :"<<f<<endl;

    cout<<endl<<"Assignment Operators : "<<endl<<endl;

    int an_integer=4;
    //This is the assignment operator 
    cout<<"This is an integer which is assigned in a variable an_integer and the value is : "<<an_integer<<endl;

    cout<<endl<<"Logical Operators : "<<endl<<endl;

    if(num1>10 || num2<10){
        cout<<num1<<" is greater than 10 or "<<num2<<" is less than 10"<<endl;
    }
    if(num1>10 && num2<10){
        cout<<num1<<" is greater than 10 and "<<num2<<" is less than 10"<<endl;
    }
    if (!num1== 0)
        cout << "You typed a number other than 0";
    else
        cout << "You typed zero";

    
    return 0;
}