#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;                    //Linear Searh
for (int i = 0; i < n; i++)//Holds Big O(n) -> Time complexity
{                                   //Nested Loops
    for (int j = 0; j < n; j++) //Now both Holds Big O(n^2) -> Time complexity 
    {
        // Some operational stuffs 
    }
    
}
                              //Binary Search
for (int i = 0; i < n/2; i++) //Holds Big O(logn) -> Time complexity 
{
    // Some Operational stuffs 
}
                              //Nested Binary Search
for (int i = 0; i < n; i++) //Holds Big O(nlogn) -> Time complexity 
{
    for (int j = 0; j < n/2; j++)
    {
        // Some Operational stuffs
    }
    
}

return 0;
}