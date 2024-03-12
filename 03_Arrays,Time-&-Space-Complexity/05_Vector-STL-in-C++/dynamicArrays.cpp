#include<iostream>
using namespace std;
void printArray(int nums[],int size){
    cout<<"Printing Array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}
int main(){
    //Static Array ->
//    int arr[5]{1,58,3,8,9};  

    //Dynamic Array ->

    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int *arr = new int[n]; // by default each element would be zero
    for (int i = 0; i < n; i++)
    {
        int data;
        cout<<"Enter "<<i+1<<" index of Array : ";
        cin>>data;
        arr[i]=data;
    }

    // But here in dynamic array we can't extend the size pof array , and here vector comes into scene .!!
    
    printArray(arr,n);

return 0;
}