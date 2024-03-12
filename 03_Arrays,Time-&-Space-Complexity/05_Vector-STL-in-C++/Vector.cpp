#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> nums)
{
    //Printing vector ->
    int n = nums.size(); // Extracting size from any vector..!
    for (int i = 0; i < n; i++)
    {
        // cout << nums[i] << " ";
        cout<<nums.at(i)<<" "; // It also print the elements of the vector      
    }
}
void printVector2(vector<int> k)
{
    // Printing by for each loop ->
    int n = k.size(); // Extracting size from any vector..!
    for(auto it:k){
        cout<<it<<" ";
    }
}
void CapacityAndSize(vector<int> nums)
{
    while (1)
    {
        int data;
        cin >> data;
        nums.push_back(data);
        cout << "Capacity : " << nums.capacity() << " and size : " << nums.size() << endl;
    }
}
void insertinVector(){
    // Inserting in vector ->
    vector<int>nums;
    for (int i = 0; i < 10; i++)
    {
        int data;
        cin>>data;
        nums.push_back(data);
    }
    cout<<"Printing array : ";
    printVector(nums);
}
int main()
{

    // Vector Initialisation ->
    vector<int>arr; // default with no data , zero size 
    vector<int>arr2(5,3); // Init with n size with specific data 
    vector<int>arr3 = {1,5,5,2,1,6,336,6};
    vector<int>arr4{1,5,5,2,1,6,336,6}; // C++ updated by 2011

    // Copy Vector ->
    vector<int>arr5{5,3,8,49,13,28,3};
    vector<int>arr6(arr);
    // printVector(arr5);

    // In vector , dont tell size of vector.
    // Just keep insreting , i will manage the allocations.!
    vector<int> v;
    // Adding values in the vector ->

    v.push_back(5); // For pushing or adding any elemnt in  any vector..!
    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    // printVector(v);

    // Finding size as well as capacity

    // CapacityAndSize(v);

    // Removing values in the vector
    v.pop_back();
    v.pop_back();
    v.pop_back();
    // printVector(v);

    // Insert in vector ->

    // insertinVector();

    // I want to clear the vector ->

    // printVector(v); // Printing the vector 
    v.clear(); // Clear all the values from the vector ..
    // printVector(v); // Printing after clearing the vector

    vector<char>ch;
    ch.push_back('A');
    ch.push_back('b');
    ch.push_back('h');
    ch.push_back('i');

    // cout<<"Front Element : "<<ch[0]<<endl;
    // cout<<"Front Element : "<<ch.front()<<endl; // Vector method 


    // cout<<"End Element : "<<ch[ch.size()-1]<<endl;
    // cout<<"End Element : "<<ch.back()<<endl; // Vector method 


    // For each Loop ->

    vector<int>nums;
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(2);
    nums.push_back(3);
    printVector2(nums);
    return 0;
}