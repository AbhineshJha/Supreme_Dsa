#include<iostream>
using namespace std;
int FindUniqueElement(int nums[],int size);
void printAllPairs(int nums[], int size);
void sortZeroesAndOnes(int nums[],int size);
void arrayShiftbyOne(int nums[],int size);
int main(){

          //Find unique element ->

    // int arr[]{1,5,4,9,12,5,1,8,4,12,9};
    // int size=sizeof(arr)/sizeof(int);
    // int res = FindUniqueElement(arr,size); 
    // cout<<"The unique element is : "<<res<<endl;

          // All pairs of an array ->

    // int arr[]{10,20,30};
    // int size=sizeof(arr)/sizeof(int);
    // printAllPairs(arr,size);

         //Sort zeroes and ones in an array ->

    int arr[]{0,1,1,0,1,0,0,1};
    int size=sizeof(arr)/sizeof(int);
    sortZeroesAndOnes(arr,size);

        //Shift element by one 

    // int arr[]{4,2,5,6,9,7,2,3,8};
    // int size=sizeof(arr)/sizeof(int);
    // arrayShiftbyOne(arr,size);

return 0;
}


void arrayShiftbyOne(int nums[],int size){
    int store=nums[size-1];
    for (int i = size-1; i > 0; i--)
    {
        nums[i]=nums[i-1];
    }
    
    nums[0]=store;

    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}

void sortZeroesAndOnes(int nums[],int size){
   
    int zeros=0;
    int ones=0;
    for (int i = 0; i < size; i++)
    {
        if(nums[i]==0) zeros++;
        else ones++;
    }
        //   First way -> 

    for (int i = 0; i < zeros; i++)
    {
        nums[i]=0;
    }
    for (int i = zeros; i < size; i++)
    {
        nums[i]=1;
    }

        //  Second way ->

    int index=0;

    while (zeros--)
    {
        nums[index]=0;
        index++;
    }
    while (ones--)
    {
        nums[index]=1;
        index++;
    }

    // Two Pointer Approach ->
    
    int low=0,high=size-1;
    while (low<=high)
    {
        if(nums[low] == 0){
            low++;
        }
        else{
            swap(nums[low],nums[high]);
            high--;
        }
    }
    
    // Dutch National Flag algorithm approach ->
    
    // int low=0,mid=0,high=size-1;
    // while (mid<=high)
    // {
    //     if(nums[mid] == 0){
    //         swap(nums[low],nums[mid]);
    //         low++;
    //         mid++;
    //     }
    //     else{
    //         swap(nums[mid],nums[high]);
    //         high--;
    //     }
    // }
    
    
    
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<< " ";
    }
    
    
}

void printAllPairs(int nums[], int size){
    // Repetitive two pairs
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<nums[i]<<" "<<nums[j]<<endl;
        }
        
    }
    // Non Repetitive two pairs
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout<<nums[i]<<" "<<nums[j]<<endl;
        }
        
    }
    // Triplet pairs
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
            cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
            }
            
        }
        
    }
    
}

int FindUniqueElement(int nums[],int size){
    int ansxor=0;
    for (int i = 0; i < size; i++)
    {
        ansxor^=nums[i];
    }
    return ansxor;
}