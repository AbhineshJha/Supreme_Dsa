#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVectorOfVector(vector<vector<int>> &nums){
    for (int i = 0; i < nums.size(); i++)
    {
        vector<int>&temp = nums[i];
        int a = temp[0];
        int b = temp[1];
        cout<< a << " "<< b << endl;
    }
}
bool myComparatorFor1stIndex(vector<int>&a,vector<int>&b){
    return a[1] < b[1];
}
int main(){
 
 vector<vector<int>> nums;
    int n ;
    cout<<"Enter the size of vector : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter num1 and num2 : ";
        int num1,num2;
        cin>>num1>>num2;
        vector<int>temp;
        temp.push_back(num1);
        temp.push_back(num2);
        nums.push_back(temp);
    }
    cout<<"Printing the vector : "<<endl;
    printVectorOfVector(nums);

    cout<<"Sort by 0 index : "<<endl;
    sort(nums.begin(),nums.end()); // By default this is gonna sort 0 index of vector.!!
    printVectorOfVector(nums);

    cout<<"Sort by 1 index : "<<endl;
    sort(nums.begin(),nums.end(),myComparatorFor1stIndex); // Sorting of first index By comparator .!!
    printVectorOfVector(nums);
return 0;
}