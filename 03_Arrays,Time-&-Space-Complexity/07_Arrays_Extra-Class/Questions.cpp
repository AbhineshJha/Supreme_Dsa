#include <iostream>
using namespace std;
void MoveSigns(int nums[], int size);
void printArray(int arr[], int size);
int main()
{
    int arr[]{4, -9, 4, 66, -1, 8, -3, 4, 7, 6, -2, 3};
    int size = sizeof(arr) / sizeof(int);
    MoveSigns(arr, size);

    // Now from here all are leetcode solutions --->
    return 0;
}

void MoveSigns(int nums[], int size)
{
    // Two Pointer Method .!
    // int left = 0;
    // int right = size-1;
    // while (left<=right)
    // {
    //     if(nums[left]>0){
    //         swap(nums[left],nums[right]);
    //         right--;
    //     }
    //     else{
    //         left++;
    //     }
    // }

    int j=0;
    for (int i = 0; i < size; i++)
    {
        if(nums[i]<0){
            swap(nums[i],nums[j]);
            j++;
        } 
    }
    
    
    printArray(nums,size);
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}