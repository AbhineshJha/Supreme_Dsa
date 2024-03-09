#include<iostream>
using namespace std;
int main(){
    int n=5;  // Normal integer variable 

    // k is a reference variable reffering to n 
    int &k=n; // Nickname given to n ..

    // c is a reference variable reffering to n 
    int &c=n;  // Nickname given to n ..

    cout<<"n : "<<n<<endl;
    
    cout<<"k : "<<k<<endl;

    cout<<"c : "<<c<<endl;

    k++;

    //Same output ->
    cout<<"n : "<<n<<endl;
    
    cout<<"k : "<<k<<endl;

    cout<<"c : "<<c<<endl;

    // int &t=6;
    //you can not assign any constant value in reference variable
    // it only accepts variables which is gonna reference by it .!!

return 0;
}