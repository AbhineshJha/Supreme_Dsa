#include<iostream>
using namespace std;
int main(){
// PS 01 ->
int arr[10];
int n=10; 
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
//     arr[i]=arr[i]*arr[i];
// }
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }


//PS 02 ->
int arr1[5];
int n1=5; 
for (int i = 0; i < n1; i++)
{
    cin>>arr1[i];
}
int sum=0;
for (int i = 0; i < n1; i++)
{
    sum+=arr1[i];
}
cout<<"The sum of all the element is : "<<sum<<endl;
return 0;
}