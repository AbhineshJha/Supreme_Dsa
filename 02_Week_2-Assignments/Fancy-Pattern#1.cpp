#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
for (int i = 0; i < num; i++)
{
    for (int j = 0; j <num*2-i-2 ; j++)
    {
        cout<<"*";
    }
    for (int j = 0; j < 2*i+1; j++)
    {
        if (j%2==0)
        {
            cout<<i+1;
        }
        else{
            cout<<"*";
        }  
    }
    for (int j = 0; j <num*2-i-2 ; j++)
    {
        cout<<"*";
    }
   cout<<endl; 
}
 

return 0;
}