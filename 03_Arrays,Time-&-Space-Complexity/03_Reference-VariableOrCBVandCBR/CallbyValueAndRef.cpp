#include<iostream>
using namespace std;
int CalByValue(int n){
    n++;
    return n;
}
void  CalByReference(int &n){
    n++;
    return;
}
int main(){

    //Call by value  || Pass by value 

    // int n;
    // cin>>n;
    // n=CalByValue(n);
    // cout<<"n : "<<n<<endl; 

    // Call by reference  ||  Pass by reference 
    
    int n;
    cin>>n;
    CalByReference(n);
    cout<<"n : "<<n<<endl; 

return 0;
}       