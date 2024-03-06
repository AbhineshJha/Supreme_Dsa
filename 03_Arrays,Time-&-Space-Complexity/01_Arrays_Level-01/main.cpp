#include<iostream>
using namespace std;
int main(){
//Array Creation ->

// int arr[5];
// char crr[5];
// bool brr[5];
// float frr[5];

// cout<<"Array creation sucessfully .!!";

int a=4;
// cout<<"Size of a is : "<<sizeof(a)<<endl;
// cout<<"Address of a : "<<&a<<endl;

// int arr[10];
// cout<<"Size of arr is : "<<sizeof(arr)<<endl;
// cout<<"Base address of arr is : "<<&arr<<endl;
// cout<<"Base address of arr is : "<<arr<<endl; //cuz array is a pointer in itself..!



//Array Initialisation->

// int arr[] = {2,5,6,9};
// int brr[4] = {5,9,3,7};
// int crr[4] = {2,6}; //other 2 address is allocated with zero.
// int drr[4] = {4,6,9,2,9,3,7,2} //throws error


//Accessing array elements using index->

// int arr[]{5,3,8,9};

// cout<<arr[0]<<" ";
// cout<<arr[1]<<" ";
// cout<<arr[2]<<" ";
// cout<<arr[3]<<" "<<endl;

//accessing via loops

// for (int i = 0; i < 4; i++)
// {
//     cout<<arr[i]<<" ";
// }


//Taking input in an array ->

int arr[5];
for (int i = 0; i < 5; i++)
{
    cout<<"Enter the value for index "<<i<<" : ";
    cin>>arr[i];
    cout<<endl;
}
//Printing the array : 
for (int i = 0; i < 5; i++)
{
    cout<<"The value of index "<<i<<" is "<<arr[i]<<endl;
}


return 0;
}