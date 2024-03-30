#include <iostream>
#include <vector>
using namespace std;
bool binarySerach(vector<int>&nums,int target)
{
    int start = 0;
    int end = nums.size()-1;
    while (start<=end)
    {
        //for finding middle element 
        int mid = (start+end)/2;
        //Found 
        if (nums[mid] == target) return true;
        // if target is greater than middle element
        else if(target > nums[mid]) start = mid+1;
        // if target is smaller than middle element
        else end=mid-1; 
    }
    return false;
}
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 5, 6, 7, 8, 9, 15, 18, 24, 75, 99};
    int target;
    cout<<"Enter any number : ";
    cin>>target;
    if(binarySerach(arr,target)) cout <<"Found !!";
    else cout<<"Not Found !!";
    return 0;
}