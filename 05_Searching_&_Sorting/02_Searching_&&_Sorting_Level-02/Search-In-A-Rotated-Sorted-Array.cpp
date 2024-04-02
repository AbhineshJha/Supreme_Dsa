#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& nums){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            // For handling only one size array .!
            if(s==e) return s;
            int mid = s+(e-s)/2;
            if(mid< n-1 && nums[mid]>nums[mid+1]) return mid;
            else if(mid>0 &&  nums[mid]<nums[mid-1]) return mid-1;
            else if(nums[mid]<nums[s]) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }
    int binarySearch(vector<int>& nums, int s, int e, int target){
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]) s = mid+1;
            else e = mid - 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int pivotRes = pivotIndex(nums);
        if(target >= nums[0] && target <= nums[pivotRes]){
            return binarySearch(nums,0,pivotRes,target);
        }
        else{
            return binarySearch(nums,pivotRes+1,n,target);
        }
        return -1;
    }
int main(){
vector<int>arr{4,5,6,7,0,1,2};
int target =  2;
int resIndex = search(arr,target);
cout<<"The index of the target is : "<<resIndex<<endl;
return 0;
}