#include<iostream>
using namespace std;
void printArray(int arr[][4],int row,int cols){
    // Row wise ->
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }

    // Column wise ->
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<arr[j][i]<<" ";
        }
       cout<<endl; 
    }
    
}
int main(){
   // Create a 2d array ->
//    int arr[3][3];

// Initialization   ->

int arr[3][4]{
    {2,8,5,7},
    {3,4,7,1},
    {0,8,5,6}
};

int brr[][4]{ // you have to give atleast col values ..!
    {2,8,5,7},
    {3,4,7,1},
    {0,8,5,6}
};

int nums[3][4]{
    {4,9,2,8},
    {6,9,4,7},
    {8,2,5,3}
};
// taking input in 2d array 
int krr[3][3];
int r = 3;
int c = 3;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        // cout<<"Enter the "<<i<<" index and "<<j<<" column element : ";
        // cin>>krr[i][j];
    }
    
}


// int r = 3;
// int c = 4;
// printArray(nums,r,c);
return 0;
}