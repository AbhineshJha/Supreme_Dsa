#include <iostream>
#include <limits.h>
using namespace std;
bool findTarget(int arr[][3], int rows, int cols, int target);
int maxElement(int arr[][3], int rows, int cols);
void rowAndColWiseSum(int arr[][3], int rows, int cols);
int diagonalSum(int arr[][4], int rows, int cols);
void transposeMatrix(int arr[][4], int rows, int cols);

int main()
{

    // Searching -> Finding target element in 2d array..

    int nums[3][3]{
        {4, 3, 6},
        {8, 9, 3},
        {1, 2, 7}};
    int target;
    //   cout<<"Enter the target : ";
    //   cin>>target;
    //   if (findTarget(nums,3,3,target))
    //   {
    //     cout<<"Found the element .!";
    //   }
    //   else cout<<"Not found .!";

    // Maximum number and minimum number ->
    int nums1[3][3]{
        {4, 31, 6},
        {8, 9, 3},
        {1, 2, 7}};
    int res = maxElement(nums1, 3, 3);
    // cout << "The maximum element is : " << res;

    // Row and Column wise sum ->

    int nums2[3][3]{
        {4, 31, 6},
        {8, 9, 3},
        {1, 2, 7}};

    // rowAndColWiseSum(nums2,3,3);

    // Diagonal sum ->

    int nums3[4][4]{
        {4, 3, 6, 1},
        {8, 9, 3, 2},
        {1, 2, 7, 4},
        {4, 7, 3, 5}
        };
    // int res1 = diagonalSum(nums3,4,4);
    // cout<<"The diagonal sum of this matrix is : "<<res1;

    // Transpose of a Matrix ->

    int nums4[4][4]{
        {4, 3, 6, 1},
        {8, 9, 3, 2},
        {1, 2, 7, 4},
        {4, 7, 3, 5}
        };
    transposeMatrix(nums4,4,4);
    
    return 0;
}

void transposeMatrix(int arr[][4], int rows, int cols){
        for (int i = 0; i < rows; i++)
        {
            for (int j = i+1; j < cols; j++)
            {
                swap(arr[i][j] , arr[j][i]);
            } 
        }
        
        cout<<"Transpose of the matrix is : "<<endl;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout<<arr[i][j]<<" ";
            }
           cout<<endl; 
        }
        
}

int diagonalSum(int arr[][4], int rows, int cols){
        // First Diagonal ->
        int sum = 0;
        // for (int  i = 0; i < rows; i++)
        // {
        //     sum+=arr[i][i];
        // }
        // return sum;

        // Second Diagonal ->

        int k=cols-1;
        for (int i = 0; i < rows; i++)
        {
            sum+=arr[i][k];
            k--;
        }
        return sum;
}

void rowAndColWiseSum(int arr[][3], int rows, int cols)
{
    // Row Wise Sum ->
    cout<<"Row Wise Sum -> \n \n";
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << "The sum of " << i << " row is " << sum<<endl;;
    }

    // Column Wise Sum ->
    cout<<endl<<"Column Wise Sum -> \n \n";
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += arr[j][i];
        }
        cout << "The sum of " << i << " column is " << sum<<endl;;
    }
}

int maxElement(int arr[][3], int rows, int cols)
{
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

bool findTarget(int arr[][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
                return true;
        }
    }
    return false;
}