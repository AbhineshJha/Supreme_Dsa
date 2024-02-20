#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
//With even odd 
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < 2*i+1; j++)
//     {
//         if (j%2!=0) cout<<"* ";
//         else cout<<i+1<<" ";
        
//     }
//     cout<<endl;
// }
 
 //without Even Odd

 for (int i = 0; i < n; i++)
 {
   for (int j = 0; j < i+1; j++)
   {
        if(j==i) cout<<i+1<<" ";
        else cout<<i+1<<" * ";
   }
   cout<<endl;
 }


// I have done it at my own , this is not included in the class.!

// int k=n;
//  for (int i = 0; i < n; i++)
//  {
//    for (int j = 0; j <n-i; j++)
//    {
//         if(j==n-i-1) cout<<k<<" ";
//         else cout<<k<<" * ";
//    }
//    k--;
//    cout<<endl;
//  }
 

return 0;
}