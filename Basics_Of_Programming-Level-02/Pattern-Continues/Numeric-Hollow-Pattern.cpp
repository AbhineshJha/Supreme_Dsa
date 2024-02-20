#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
for (int i = 0; i < n; i++)
{
    int k=1;
    for (int j = 0; j < 2*i+1; j++)
    {
        if(i==0 || i==n-1){
            cout<<k<<" ";
            k++;
        } 
        else
        {
            if(j==0 || j==2*i){ 
            cout<<i+1<<" ";
            // k++;
            }
            else cout<<"  ";
        }
        
    }
    cout<<endl;
}
 

return 0;
}