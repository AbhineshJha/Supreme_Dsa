#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col;
        
        int s = 0;
        int e = total - 1;
        while(s<=e){
            int mid = (s+e)/2;
            int rowIndex = mid/col;
            int colIndex = mid%col;
            int currElement = matrix[rowIndex][colIndex];

            if(currElement == target) return true;
            else if(currElement > target) e = mid -1;
            else s = mid+1;
        }
        return false;
    }
int main(){
    vector<vector<int>> nums{
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int target = 151;
    bool res = searchMatrix(nums,target);
    if(res) cout<<"Foundddd.!!";
    else cout<<"Not Founddd.!!";
return 0;
}