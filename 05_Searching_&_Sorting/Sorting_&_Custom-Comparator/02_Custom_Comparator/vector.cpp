#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printVector(vector<int>&nums){
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
}
bool myComparator(int &a, int &b){ // It will always of bool type .
    return  a > b; // myComparator is a custom comparator where it sorts the vector in descending order.!!
}


int main(){

    vector<int>arr{2,4,6,1,7,8,9,5};
    // sort(arr.begin(),arr.end());  // For sorting in increasing order 
    sort(arr.begin(),arr.end() , myComparator);  // For sorting in decreasing order using comparator  
    printVector(arr);

   
return 0;
}