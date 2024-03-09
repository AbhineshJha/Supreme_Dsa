#include <iostream>
#include<limits.h>
using namespace std;
bool linearSearch(int nums[], int size, int target);
void countZerosAndOnes(int arr[], int size);
int minimumNumber(int nums[], int size);
void reverseArray(int nums[],int size);
void extremePrint(int nums[],int size);
int main()
{
    // Linear Search ->

    // int arr[]{2, 5, 6, 3, 1, 7, 9, 8};
    // int target;
    // cout << "Enter any target : ";
    // cin >> target;
    // if (linearSearch(arr, 8, target))
    //     cout << "Found .!!";
    // else
    //     cout << "Not Found .!!";

    // Count Zeroes and Ones ->

    // int arr[]{0,1,1,0,1,0,0,0,1,0,1,1,0};
    // int size=13;
    // countZerosAndOnes(arr,size);

    // Minimum number in the array ->

    // cout<<"Minimum : "<<INT_MIN<<" Maximum : "<<INT_MAX;
    // int arr[]{9,85,8,597,5,8,52945,289,27,3,89,4,0};
    // int size=sizeof(arr)/sizeof(int);
    // int res =  minimumNumber(arr,size);
    // cout<<"The minimum number in this array is : "<<res;

    // Reverse an Array ->

    // int arr[]{9,85,8,597,5,8,15,2,27,3,7,4,0};
    // int size=sizeof(arr)/sizeof(int);
    // reverseArray(arr,size);

    // Extreme print of an array ->

    int arr[]{1,2,7,4,5};
    int size=sizeof(arr)/sizeof(int);
    extremePrint(arr,size);

    return 0;
}


void extremePrint(int nums[],int size){
    int left=0;
    int right=size-1;
    cout<<"Extreme print of the array "<<endl;;
    while (left<=right)
    {
        if(left==right) cout<<nums[left]<<" ";

        else{
        cout<<nums[left]<<" "<<nums[right]<<" ";
        }
        left++;
        right--;
    }
}

void reverseArray(int nums[],int size){
    int left=0;
    int right=size-1;
    while (left<=right)
    {
        swap(nums[left],nums[right]); // Two pointer method .!
        left++;
        right--;
    }
    
    cout<<"Reversed Array : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}

int minimumNumber(int nums[], int size){
    int minimum=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(nums[i]<minimum) minimum=nums[i];
    }
    return minimum;
}

void countZerosAndOnes(int arr[], int size)
{
    int countZero = 0;
    int countOne = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            countZero++;
        else
            countOne++;
    }
    cout << "The count of 0 is : " << countZero << " and 1 is : " << countOne << endl;
}

bool linearSearch(int nums[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == target)
            return true;
    }
    return false;
}