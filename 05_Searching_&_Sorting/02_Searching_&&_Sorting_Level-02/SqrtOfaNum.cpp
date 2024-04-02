#include<iostream>
using namespace std;
int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = -1;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            long long int sqrt = mid*mid;
            if(x == sqrt) return mid;
            else if(sqrt>x) e = mid-1;
            else{
                ans = mid;
                s = mid+1;
            }
        }
        return ans;
    }
int main(){

int num;
cout<<"Enter any number : ";
cin>>num;
int res = mySqrt(num);
cout<<"The Square root of "<<num<<" is : "<<res;
return 0;
}