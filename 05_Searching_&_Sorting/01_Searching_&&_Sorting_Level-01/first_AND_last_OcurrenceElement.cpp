#include <iostream>
#include <vector>
using namespace std;
int firstOccurrenceElement(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size()-1;
    int ans = 0;
    while (start<=end)
    {
        // int mid = (start+end)/2;
        int mid = start+(end-start)/2; // Best Practice
        if (nums[mid] == target){
            ans = mid; 
            end = mid-1;
        }
        else if(target > nums[mid]) start = mid+1;
        else end=mid-1; 
    }
    return ans;
}
int lastOccurrenceElement(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size()-1;
    int ans = 0;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if (nums[mid] == target){
            ans = mid; 
            start = mid+1;
        }
        else if(target > nums[mid]) start = mid+1;
        else end=mid-1; 
    }
    return ans;
}
int main()
{
    vector<int> arr{10,20,30,30,30,30,40,50,30};
    int target = 30;
    // int resIndex = firstOccurrenceElement(arr,target);
    // if (resIndex) cout<<"The first occurrence of the element is : "<<resIndex<<endl;
    // else cout<<"Not present in the Array :/";

    int resIndex1 = lastOccurrenceElement(arr,target);
    if (resIndex1) cout<<"The last occurrence of the element is : "<<resIndex1<<endl;
    else cout<<"Not present in the Array :/";
    

    // To Find total occurrence .! ->
    
    // int totalOccurrence = resIndex1-resIndex+1;
    // cout<<"The total occurrence of "<<target<<" is "<<totalOccurrence;

    return 0;
}