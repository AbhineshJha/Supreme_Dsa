#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
//This one is of class code 

for (int i = 0; i < n; i++)
{
    char ch;
    for (int j = 0; j < i+1; j++)
    {
        ch=j+1+'A'-1;
        cout<<ch<<" ";
    }
    for (char j = ch-1; j >= 'A' ; j--)
    {
        cout<<j<<" ";
    }
    
    cout<<endl;
}



//This code is created by me .!

// for (int i = 0; i < n; i++)
// {
//     char l=i+'A'-1;
//     for (int j = 0; j < 2*i+1; j++)
//     {
//         if(j>i){
//             cout<<l<<" ";
//             l--;
//         }
//         else{
//             cout<<char(j+1+'A'-1)<<" ";
//         }
//     }
//     cout<<endl;
// }

 

return 0;
}