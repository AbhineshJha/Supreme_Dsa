#include<iostream>
using namespace std;
int CreateNumUsingDigits(int numOfdigits);
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
int res=CreateNumUsingDigits(num);
cout<<"The Created number is : "<<res;
return 0;
}
int CreateNumUsingDigits(int numOfdigits){
    int res=0;
    for (int i = 0; i < numOfdigits; i++)
    {
        int n;
        cout<<"Enter "<<i+1<<" digit : ";
        cin>>n;
        res=res*10+n;
    }
    return res;
}