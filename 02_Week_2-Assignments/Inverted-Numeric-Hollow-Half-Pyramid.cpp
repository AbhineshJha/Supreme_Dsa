#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
for (int i = 0; i < num; i++)
{
    for (int j = 0; j < num-i; j++)
    {
        if (i==0 || i==num-1)
        {
            cout<<j+1<<" ";
        }
        else{
            if (j==0 || j==num-i-1)
            {
                cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
            
        }
    }
    cout<<endl;
}
 

return 0;
}