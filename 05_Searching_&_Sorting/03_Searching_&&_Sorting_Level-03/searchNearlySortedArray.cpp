#include<bits/stdc++.h>
using namespace std;
int searchNearlySortedArray(vector<int>&nums , int &target){
    int n = nums.size()-1;
    int s = 0;
    int e = n;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(nums[mid] == target) return mid;
        else if(mid > 0 && nums[mid-1] == target) return mid-1;
        else if(mid < n && nums[mid+1] == target) return mid+1;
        else if(nums[mid]<target) s = mid + 2;
        else e = mid - 2;
    }
    return -1;
}
int main(){

vector<int>arr{20,10,30,50,40,70,60};
int target = 10;
int res = searchNearlySortedArray(arr,target);
if(res!=-1) cout<<"The index Value of "<<target<<" is : "<<res;
else cout<<"Not Found.!!!";

return 0;
}