#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter any number : ";
cin>>num;
for (int i = 1; i <= num; i++)
{
    int c=1;
    for (int j = 1; j <= i; j++)
    {
        cout<<c<<" ";
        c=c*(i-j)/j;
    }
    cout<<endl;
}


return 0;
}