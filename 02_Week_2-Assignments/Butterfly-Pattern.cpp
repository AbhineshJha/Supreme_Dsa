#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number : ";
cin>>n;
int num=n/2;
for (int i = 0; i < num; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout<<"*";
    }
    for (int j = 0; j < num-i-1; j++)
    {
        cout<<" ";
    }
    for (int j = 0; j < num-i-1; j++)
    {
        cout<<" ";
    }
    for (int j = 0; j < i+1; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
for (int i = 0; i < num; i++)
{
    for (int j = 0; j < num-i; j++)
    {
        cout<<"*";
    }
    for (int j = 0; j < i; j++)
    {
        cout<<" ";
    }
    for (int j = 0; j < i; j++)
    {
        cout<<" ";
    }
    for (int j = 0; j < num-i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
 

return 0;
}