#include<iostream>
using namespace std;
int main(){
int num,count=1;
cout<<"Enter any number : ";
cin>>num;
for (int i = 0; i < num; i++)
{
    for (int j = 0; j <i+1; j++,count++)
    {
        cout<<count<<" ";
    }
    cout<<endl;
}
return 0;
}