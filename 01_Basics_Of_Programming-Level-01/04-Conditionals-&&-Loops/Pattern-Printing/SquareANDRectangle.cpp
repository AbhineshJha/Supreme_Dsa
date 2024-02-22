#include<iostream>
using namespace std;
int main(){

    //Pattern Printing !!

    // Square Pattern
    // * * * *
    // * * * *
    // * * * *
    // * * * *

    // Outer Loops -> Rows
    // for (int i = 0; i < 4; i++)
    // {
    //     // Inner loops for printing 4 stars  
    //     for (int i = 0; i < 4; i++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // Rectangle Pattern
    // * * * * * *
    // * * * * * *
    // * * * * * *

    // Outer Loops -> Rows
    for (int i = 0; i < 3; i++)
    {
        // Inner loops for printing 6 stars 
        for (int i = 0; i < 6; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}