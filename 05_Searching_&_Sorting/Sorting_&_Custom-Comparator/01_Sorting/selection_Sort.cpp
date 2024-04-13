#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>&nums){
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}
void selectionSort(vector<int>&nums){
    int n = nums.size();
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(nums[j]<nums[minIndex]) minIndex = j;
        }
       swap(nums[i],nums[minIndex]); 
    }
   printArray(nums); 
}
int main(){
vector<int>arr{2,5,3,4,9,-1};
selectionSort(arr);
return 0;
}