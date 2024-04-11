#include<bits/stdc++.h>
using namespace std;
int oddOccurringElement(vector<int>&nums){
    int n = nums.size();
    int s = 0;
    int e = nums.size()-1;
    while (s<=e)
    {
        if(s == e) return s;
        int mid = s+(e-s)/2;
        if(mid & 1){
            if(mid > 0 && nums[mid] == nums[mid-1]) s = mid+1;
            else e = mid-1;
        }   
        else{
            if(mid+1 < n && nums[mid] == nums[mid+1]) s = mid+2;
            else e = mid;
        }
    }
    
}
int main(){
vector<int>ans{1,1,2,2,3,3,5,5,6,6,7,7,2,2,3};
int resIndex = oddOccurringElement(ans);
cout<<"The Unique element is : "<<ans[resIndex]<<endl;
return 0;
}