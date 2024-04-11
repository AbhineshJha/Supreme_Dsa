#include<bits/stdc++.h>
using namespace std;
int getQuotient(int divisor,int divident){
    int s = 0;
    int e = divident;
    int ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(mid*divisor == divident) return mid;
        else if(mid*divisor > divident) e = mid-1;
        else{
            ans = mid;
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    int divisor = -7;
    int divident = -28;
    int res_Quotient = getQuotient(abs(divisor),abs(divident));
    if((divident < 0 && divisor > 0) || (divident > 0 && divisor < 0)) res_Quotient=0-res_Quotient;
    cout<<"The quotient is : "<<res_Quotient<<" ";
return 0;
}