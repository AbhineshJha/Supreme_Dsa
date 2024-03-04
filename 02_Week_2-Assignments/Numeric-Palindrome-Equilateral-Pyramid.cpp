#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int k = i;
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        for (int j = 0; j < i; j++)
            {
                cout<<i-j<<" ";
            }

        cout << endl;
    }
    return 0;
}