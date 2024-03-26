#include <iostream>
using namespace std;
int main()
{
    int arr[3][4]{
        {4, 9, 3, 9},
        {6, 4, 3, 7},
        {5, 6, 9, 1}};
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[j][i] << " ";
            }
            // cout << endl;
        }
        else{
            for (int j = 2; j >=0; j--)
            {
                cout << arr[j][i] << " ";
            }
            // cout << endl;
        }
    }

    return 0;
}