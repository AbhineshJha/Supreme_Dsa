#include <iostream>
using namespace std;
float kmToMiles(float km);
int main()
{
    float km;
    cout << "Enter kilometers : ";
    cin >> km;
    float miles = kmToMiles(km);
    cout << "Miles : " << miles;
    return 0;
}
float kmToMiles(float km)
{
    float _1kmmile = 0.621371;
    float miles = km * _1kmmile;
    return miles;
}