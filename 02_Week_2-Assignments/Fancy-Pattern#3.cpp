#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
for (int i = 0; i < num; i++)
{
    int k=1,h;
    for (int j = 0; j < 2*i+1; j++)
    {
        if (j==0 || j==2*i)
        {
            cout<<"* ";
        }
        else{
            if (j<=(2*i)/2)
            {
                cout<<k++<<" ";
                h=k-1;
            }
            else{
                h--;
                cout<<h<<" ";
            } 
        }
        
    }
    cout<<endl;
}
 

return 0;
}