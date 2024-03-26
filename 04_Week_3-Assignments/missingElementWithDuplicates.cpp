#include<iostream>
using namespace std;
void methodOne(int nums[],int len){
    for (int i = 0; i < len; i++)
    {
        int index = abs(nums[i]);
        if (nums[index-1]>0)
        {
            nums[index-1]*=-1;
        }
        
    }
    
    for (int i = 0; i < len; i++)
    {
        if (nums[i]>0)      
        {
            cout<<i+1;
        }
        
    }
    
    // for (int i = 0; i < len; i++)
    // {
    //     cout<<nums[i]<<" ";
    // }
    
}
void methodTwo(int nums[],int len){
    
    int ptr=0;
    while (ptr<len)
    {
        int index=nums[ptr]-1;
        if (nums[ptr] != nums[index])
        {
            swap(nums[ptr],nums[index]);
        }
        else{
            ptr++;
        }
        
    }
    
    for (int i = 0; i < len; i++)
    {
        if (nums[i]!=i+1)
        {
            cout<<i+1<<" ";
        }
        
    }
    
}
int main(){
    int arr[] = {1,3,5,3,4};
    int size = sizeof(arr)/sizeof(int); 
    // methodOne(arr,size);
    methodTwo(arr,size);
    
    
return 0;
}