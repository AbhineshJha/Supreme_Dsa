#include<iostream>
using namespace std;
int main(){

    // Implicit Type Casting !! 

// int to float
// int a=5;
// float b=10.5;
// cout<<a+b; 

//char to int
// char ch='A';
// int a=1;
// char ab =ch+a;
// cout<<ab;

//int to char 
// int a=65;
// char b=a;
// cout<<b;

   // Explicit Type Casting !! 

//double to int 
// double pi =3.14159265;
// int k=int(pi); // Can use both .!
// int k=(int)pi;
// cout<<k;

//float to char 
// float floatingNUm=65.26;
// char j=(char)floatingNUm;
// char j=floatingNUm;
// cout<<j;

//int to float
int a=10;
int b=3.0;
float c=10/(float)b;
cout<<c;
return 0;
}