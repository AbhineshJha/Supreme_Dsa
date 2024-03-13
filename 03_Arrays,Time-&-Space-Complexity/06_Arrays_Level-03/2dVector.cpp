#include<iostream>
#include<vector>
using namespace std;
int main(){
     // 1D Vector ->

    vector<int>arr;
    // cout<<"Size : "<<arr.size()<<endl;
    vector<int>brr(5,10);
    // cout<<arr.empty()<<endl; // Returns if vector is empty or not ->

     // 2D Vector in C++ ->

    vector<vector<int>>arrr; // 2D VectorInitialisation.!

    vector<vector<int>>nums(5,vector<int>(6,1));
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[0].size(); j++)
        {
            // cout<<nums[i][j]<<" ";
        }
       cout<<endl; 
    }

    // Jagged Array ->

    vector<vector<int>>krr;

    vector<int>vec1(10,0);
    vector<int>vec2(4,3);
    vector<int>vec3(6,2);
    vector<int>vec4(5,9);
    vector<int>vec5(3,10);
    
    krr.push_back(vec1);
    krr.push_back(vec2);
    krr.push_back(vec3);
    krr.push_back(vec4);
    krr.push_back(vec5);

    for (int i = 0; i < krr.size(); i++)
    {
        for (int j = 0; j < krr[i].size(); j++)
        {
            cout<<krr[i][j]<<" ";
        }
       cout<<endl; 
    }
    
return 0;
}