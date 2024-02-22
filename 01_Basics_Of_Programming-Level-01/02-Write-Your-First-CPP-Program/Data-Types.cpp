#include<iostream>
using namespace std;
int main(){
        cout<<" Enter any integer : ";
        int a;
        cin>>a;
        cout<<"The number is : "<<a<<endl;
        cout<<"The size of int is : "<<sizeof(a)<<endl;

        cout<<" Enter any character: ";
        char ch;
        cin>>ch;
        cout<<"The character is : "<<ch<<endl;
        cout<<"The size of char is : "<<sizeof(ch)<<endl;

        cout<<" Enter any floating value : ";
        float f;
        cin>>f;
        cout<<"The floating number is : "<<endl;
        cout<<"The size of float is : "<<sizeof(f)<<endl;

        cout<<" Enter any long inetger: ";
        long l;
        cin>>l;
        cout<<"The long number is : "<<l<<endl;
        cout<<"The size of long is : "<<sizeof(l)<<endl;

        cout<<" Enter any two  value: ";
        int  b,o;
        cin>>b>>o;
        bool c =b>o;
        cout<<"The value is : "<<c<<endl;
        cout<<"The size of boolean is : "<<sizeof(c)<<endl;
        cout<<endl;

        cout<<" Garbage value concept: "<<endl;
        int a;
        cout<<a<<endl;

    return 0;
}