#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>&nums){
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}
void insertionSort(vector<int>&nums){
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key)   
        {
            nums[j+1] = nums[j];
            j--; 
        }
        nums[j+1] = key;
    }
   printArray(nums); 
}
int main(){
vector<int>arr{5,2,8,3,4,2,4,8,1,7};
insertionSort(arr);
return 0;
}