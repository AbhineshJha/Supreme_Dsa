#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(int nums[],int size)
{
    int start = 0;
    int end = size-1;
    int ans = -1;
    while (start<=end){
        int mid = (start+end)/2;
        if (nums[mid]==mid+1)
        {
            start=mid+1;
        }
        else if (nums[mid]>mid+1)
        {
            ans = mid+1;
            end=mid-1;
        }
    }
       return ans; 
}
int main()
{
    int arr[]{1,2,3,4,5,6,7,8};
    int size = 8;
    int resVal = findMissingNumber(arr,size);
    cout<<"The missing element is : "<<resVal<<endl;
    return 0;
}