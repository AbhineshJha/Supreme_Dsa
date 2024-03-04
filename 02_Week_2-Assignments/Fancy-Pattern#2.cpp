#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
int cnt=1;
for (int i = 0; i < num; i++)
{
    for (int j = 0; j < 2*i+1; j++)
    {
        if (j%2==0)
        {
            cout<<cnt;
            cnt++;
        }
        else{
            cout<<"*";
        }   
    }
   cout<<endl;   
}
int k=cnt-num;
for (int i = 0; i < num; i++)
{
    int st=k;
    for (int j = 0; j < 2*num-2*i-1; j++)
    {
         if (j%2==0)
        {
            cout<<st;
            st++;
        }
        else{
            cout<<"*";
        } 
    }
    k=k-(num-i-1);
   cout<<endl;   
}
 

return 0;
}