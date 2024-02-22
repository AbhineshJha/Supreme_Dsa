#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
// for (int i = 0; i < num; i++)
// {
//     for (int j = i;  j< num; j++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
    
// }


for (int i = 0; i < num; i++)
{
    for (int j = 0;  j< num-i; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
    
}
 

return 0;
}