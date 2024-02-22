#include<iostream>
using namespace std;
int main(){

//Hollow Rectangle !

//  * * * * * * *
//  *           *
//  *           *
//  * * * * * * *

for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 7; j++)
    {
        if (i==1 || i==2)
        {
            if (j==0 || j==6) cout<<"* ";
            else cout<<"  ";
        }
        else cout<<"* ";
    }
    cout<<endl; 
}


return 0;
}